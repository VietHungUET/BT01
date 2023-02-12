#include<bits/stdc++.h>
using namespace std;
int main()
{  int n;
    while(cin>>n)
    {
      int thuong= (n>0 && n%5==0)?1:-1;
      cout<<thuong;
      if(n==-1) {break;}
    }
}
