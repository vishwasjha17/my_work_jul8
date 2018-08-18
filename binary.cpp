#include<iostream>
using namespace std;
int main()
{
cout<<"no of possible subsets in set of element "<<endl;
int n;
cin>>n;
cout<<"enter no of characters in string"<<endl;
string A;
cin>>A;

cout<<"all sets are"<<" :"<<endl<<endl;
for(int i=0;i<(1<<n);i++)
{
   for(int j=0;j<n;j++)
   {
      if(i&(1<<j))
      {
        cout<<A[j]<<",";
      }

   }
   cout<<endl;
}


  return 0;
}
