#include <bits/stdc++.h>
using namespace std;
int main()
{
    int arr[9],c=0,d=0;
    for(int i=0;i<8;i++)
    {
        cin>>arr[i];
        if(arr[i]%25==0 && arr[i]>=100 && arr[i]<=675)
        {
            d++;
        }
        if(i>0)
            {
                if(arr[i]>=arr[i-1])
                   c++;
            }
    }
    if(c==7 && d==8)
      cout<<"Yes"<<endl;
    else
      cout<<"No"<<endl;
    return 0;
}