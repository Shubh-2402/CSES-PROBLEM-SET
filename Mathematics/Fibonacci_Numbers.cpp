#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    ll n,mod=1e9+7;
    cin>>n;

    if(n==0 || n==1)
    cout<<n;
    else
    {
        ll l1=0,l2=1,result;

        for(ll i=2;i<=n;i++)
        {
            result=(l1+l2)%mod;
            l1=l2;
            l2=result;
        }

        cout<<result;
    }
    return 0;
}