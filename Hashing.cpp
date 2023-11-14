#include <bits/stdc++.h>
#define ll long long int
using namespace std;
const int MOD = 1000000007;
const int BASE = 257;
vector<ll> prefixHash, basePow;

void preprocess(string &s)
{
    prefixHash.resize(s.size() + 1);
    basePow.resize(s.size() + 1);

    prefixHash[0] = s[0];
    basePow[0] = 1;

    for(int i = 1; i < s.size(); i++)
    {
        prefixHash[i] = (prefixHash[i - 1] * BASE) + s[i];
        if(prefixHash[i] >= MOD)
            prefixHash[i] %= MOD;
        
        basePow[i] = (basePow[i-1] *BASE);
        if(basePow[i] >= MOD)
           basePow[i] %= MOD;
    }
}

ll getHash(int L, int R)
{
    if(L == 0)
       return prefixHash[R];
    ll A = prefixHash[R];
    ll B = prefixHash[L - 1] * basePow[R - L + 1]; //1234 theke 34 ber korte hole 12 ke 100 diye multiply korte hobe
    if(B >= MOD)
        B %= MOD;
    return (A - B + MOD) % MOD;
}

int main()
{
   string s;
   cin>>s;
   int q,l,r;
   preprocess(s);
   cin>>q;
   while(q--)
   {
      cin>>l>>r;
      cout<<s.substr(l, r - l + 1)<<" "<<getHash(l,r)<<endl;
   }
   
}
