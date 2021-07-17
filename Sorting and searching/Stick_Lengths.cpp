#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    ll n,median,cost=0;

    cin>>n;

    ll arr[n];

    for(ll i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    sort(arr,arr+n);

    median=arr[n/2];

    for(ll i=0;i<n;i++)
    cost+=abs(median-arr[i]);

    cout<<cost;

    return 0;
}