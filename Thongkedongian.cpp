#include<bits/stdc++.h>
using namespace std;

int main()
{
 int arr[100001];
 int n;
 cin>>n;
  int s=0;
 for(int i=0;i<n;i++)
 {
  cin>>arr[i];
  s+=arr[i];
 }
int max_arr=*max_element(arr,arr+n);
int min_arr=*min_element(arr,arr+n);
double gttb=  double (s)/n;
cout<<"Mean:"<<" "<<gttb<<'\n';
cout<<"Max:"<<" "<<max_arr<<'\n';
cout<<"Min:"<<" "<<min_arr<<'\n';}
