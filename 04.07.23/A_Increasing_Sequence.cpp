#include <bits/stdc++.h>
#define ll long long int 
using namespace std;
#define fasst ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
int main()
{
fasst;
ll t=1,i,j,n,d;
//cin>>t;
while(t--)
{
  cin>>n>>d;
  ll a[n+5];
  for(i=0;i<n;i++)
  {
    cin>>a[i];
  }
  ll c=0;
  for(i=1;i<n;i++)
  {
    if(a[i]<a[i-1])
    {
       ll temp=a[i-1]-a[i];
       temp/=d;
       if((a[i-1]-a[i])%d!=0)
         temp++;
       c+=temp;
       a[i]+=(temp*d);
    }
    else if(a[i]==a[i-1])
    {
      c++;      
      a[i]+=d;
    }
  }
  cout<<c<<endl;
}
}