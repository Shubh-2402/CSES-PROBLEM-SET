#include<bits/stdc++.h>
#define ll long long
using namespace std;
ll modpow(ll x,ll n,ll m)
{
    if(n==0)
    return 1%m;

    long long u = modpow(x,n/2,m);
    u = (u*u)%m;

    if(n%2==1)
    u=(u*x)%m;

    return u;
}
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    ll n;
    cin>>n;

    const ll mod= 1e9+7;

    cout<<modpow(2,n,mod);
    return 0;
}