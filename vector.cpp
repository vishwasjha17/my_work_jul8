#include<iostream>
#include<vector>
using namespace std;
//int a[26];
int main()
{
int t;
cin>>t;
while(t--)
{int n;
  cin>>n;

vector<char> v(n);
vector<vector<char> >  v2(n,v);
char ch='a';
int k=0;
for(int i=0;i<n;i++)
{
for(int j=0;j<n;j++)
{
    if((i==0||i==n-1)&&j>=1&&j<n-1)
        {
          v2[i][j]=ch+k;
           k++;
        }
     if(j==0||j==n-1)
       {
         v2[i][j]=ch+k;
          k++;
       }
   if((i>=1&&i<n-1)&&(j>=1&&j<=n-2))
   {
     v2[i][j]='$';
   }
   //   cin>>v2[i][j];
}
}
for(int i=0;i<v2.size();i++)
{
for(int j=0;j<v2[i].size();j++)
{
   cout<<v2[i][j];
}
cout<<endl;
}

cout<<endl;
//cout<<s.size();

}
return 0;
}
