#include<bits/stdc++.h>
using namespace std;
int main()
{
    int d,y,m;
    cin>>d>>m>>y;
    int y0= y-(14-m)/12;
    int x= y0+y0/400-y0/100+y0/4;
    int m0=m+12*((14-m)/12)-2;
    int day_of_week=(d+x+31*m0/12)%7;
    switch(day_of_week)
    {
    case 0:
    {
        cout<<"Sunday";
        break;
    }
    case 1:
    {
        cout<<"Monday";
        break;
    }
    case 2:
    {
        cout<<"Tuesday";
        break;
    }
    case 3:
    {
        cout<<"wednesday";
        break;
    }
    case 4:
    {
        cout<<"Thursday";
        break;
    }
    case 5:
    {
        cout<<"Friday";
        break;
    }
    case 6:
    {
        cout<<"Saturday";
        break;
    }
    default: cout<<"Khong dung cu phap";
    break;
    }
}
