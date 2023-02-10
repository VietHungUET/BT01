#include<bits/stdc++.h>
using namespace std;
void merge(int a[],int m, int b[],int n)
{  int c[m+n+3];
   for(int i=1,j=1,k=1;i<=m+n,j<=m+n,k<=m+n;i++,j++,k++)
   {
    if(a[i]>=b[j])
    {
      c[k]=b[j];
      i--;
    }
    else
    {
      c[k]=a[i];
      j--;
    }
   }
   for(int k=1;k<=m+n;k++)
   {
    cout<<c[k]<<" ";
   }

}
int main()
{
int a[100],b[100];
int m,n;
cin>>m;
for(int i=1;i<=m;i++)
{
  cin>>a[i];
}
cin>>n;
for(int i=1;i<=n;i++)
{
cin>>b[i];
}
merge(a,m,b,n);

}
