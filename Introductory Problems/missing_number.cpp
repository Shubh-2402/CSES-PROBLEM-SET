#include<iostream>
#define ll long long int
using namespace std;
int main()
{
    ll n;
    cin>>n;

    int f[n+1]={0};

    for(ll i=1;i<n;i++)
    {
        ll a;
        cin>>a;

        f[a]=1;
    }
    for(ll i=1;i<=n;i++)
    {
        if(!f[i])
        {
            cout<<i;
            break;
        }
    }
}