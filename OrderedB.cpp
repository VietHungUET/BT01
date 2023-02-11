#include<bits/stdc++.h>
using namespace std;
bool b(int a, int b, int c)
{
  return( ((a>b) &&(a>c) && (b>c)) || ((a<b)&&(a<c)&&(b<c)));

}
int main()
{
int x,y,z;
cin>>x>>y>>z;
cout<<b(x,y,z);


}
