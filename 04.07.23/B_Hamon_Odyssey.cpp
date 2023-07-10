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
  cin>>n;
  ll a[n+5];
  vector<int>vp;
  for(i=0;i<n;i++)
  {
    cin>>a[i];
  }
  int m=0;
  int c=0;
  for(i=0;i<n;i++)
  {
    if(m==0)
      m=a[i];
    else{
    m=(m&a[i]);
    if(m==0)
      c++;
    }  
  }
  if(c==0)
    c=1;
  cout<<c<<endl;
}
return 0;
}