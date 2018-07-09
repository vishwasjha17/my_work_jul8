#include<iostream>
using namespace std;

bool is_leap(int year)
{
  bool leap=false;
if(year%4==0)
leap=true;
if(year%100==0)
leap=false;
if(year%400==0)
leap=true;
return leap;
}



int main()
{
int a[]={31,28,31,30,31,30,31,31,30,31,30,31};
int day=7;
int count=0;
//1 jan 1900 monday
int month=0;
int year=1900;
while(year<2001)
{
//days changed at feburary
if(is_leap(year))
a[1]=29;
else
a[1]=28;

if(day>a[month])
{
day=day-a[month];
month++;
}

if(month==12)
{
month=0;
  year++;
}

if(day==1&&year>1900)
{
  count++;
}

day+=7;

}
cout<<count<<endl;
  return 0;
}
