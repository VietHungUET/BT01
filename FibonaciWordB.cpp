#include<bits/stdc++.h>
using namespace std;
int main()
{
string s[15];
s[0]="a";s[1]="b";
for(int i=2;i<=10;i++)
{
 s[i]=s[i-1]+s[i-2];
}
for(int i=0;i<=10;i++)
{
 cout<<s[i]<<'\n';
}
}
