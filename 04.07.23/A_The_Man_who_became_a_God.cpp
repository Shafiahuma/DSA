#include <bits/stdc++.h>
#define ll long long int 
using namespace std;
#define fasst ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
int main()
{
fasst;
ll t=1,i,j,n,d;
cin>>t;
while(t--)
{
  cin>>n>>d;
  ll a[n+5];
  vector<int>vp;
  for(i=0;i<n;i++)
  {
    cin>>a[i];
    if(i>0)
    {
        vp.push_back(abs(a[i]-a[i-1]));
    }
  }
    sort(vp.begin(),vp.end());
    if(d==n)
      cout<<"0"<<endl;
    else
    {
        n-=d;
        ll sum=0;
        for(i=0;i<n;i++)
        {
          sum+=vp[i];
        }
        cout<<sum<<endl;
    }
  }
  return 0;
}