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

int a[2*n-1][2*n-1];

for(int i=0;i<2*n-1;i++)
{
  for(int j=0;j<2*n-1;j++)
  a[i][j]=0;
}

for(int i=0;i<2*n-1;i++)
{
  a[0][i]=n;
}



   int start=0,end=2*n-2;



      for(int i=1;i<=n-1;i++)
      {
        start+=1;end-=1;

        for(int j=0;j<2*n-1;j++)
        {
         if(j>=start&&j<=end)
            {
              a[i][j]=a[i-1][j]-1;
            }
          else
             a[i][j]=a[i-1][j];
        }

      }

    for(int i=2*n-2;i>=n;i--)
    {

    for(int j=0;j<2*n-1;j++)
    {
       a[i][j]=a[2*n-2-i][j];
    }

    }

    for(int i=0;i<2*n-1;i++)
    {
      for(int j=0;j<2*n-1;j++)
        cout<<a[i][j];
      cout<<" ";
    }


}


  return 0;
}
