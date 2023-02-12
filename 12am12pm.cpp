#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t=1,i=0;
    while(i<12)
    {
        if(t==1)
        {
            cout<<12<<" "<<"midnight"<<'\n';
            t=2;
        }
        else if(t==2)
        {
            i++;
            cout<<i<<"am"<<'\n';
            if(i==11)
            {
                t=0;
                i=0;
            }
        }
        else if(t==0)
        {
            cout<<12<<" "<<"noon"<<'\n';
            t=3;
        }
        else if(t==3)
        {
            i++;
            cout<<i<<"pm"<<'\n';

        }


    }


}
