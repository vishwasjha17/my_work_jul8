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

int temp=n;
int pr=1;
int pr_sq=n*n+1;
int temp_sq=n*n+n;

for(int i=0;i<n;i++)
{
//printing upton
for(int j=0;j<i*2;j++)
  {
     cout<<"-";
  }

   for(int c=pr;c<=temp;c++)
   {
      cout<<c<<"*";
   }

pr=temp+1;
temp=temp+(n-(i+1));

  for(int sq=pr_sq;sq<=temp_sq;sq++)
  {
    if(sq==temp_sq)
    cout<<sq;
    else
    cout<<sq<<"*";

  }

temp_sq=pr_sq-1;
pr_sq=temp_sq-(n-(i+2));

cout<<endl;

}
cout<<endl;
}

  return 0;
}
