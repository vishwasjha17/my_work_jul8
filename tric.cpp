#include<iostream>
using namespace std;
int main()
{

int t;
cin>>t;
while(t--)
{


int n;
cin>>n;
int k=0;
for(int i=n;i>0;i--)
{
int space=2*(k)-1;
int j=1+2*(i-1);
while(space-- > 0)
cout << " ";
while(j--)
cout << "*";
k++;

cout<<endl;

}
cout<<endl;
}
  return 0;
}
