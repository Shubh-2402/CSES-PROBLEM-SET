#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    ll n,k;
    cin>>n>>k;

    ll arr[n];

    for(ll i=0;i<n;i++)
    cin>>arr[i];

    vector<ll> vec;

    for(ll i=0;i<2;i++)
    vec.push_back(arr[i]);


    for(ll i=0;i<=n-k;i++)
    {
        vec.push_back(arr[i+k]);

        sort(vec.begin(),vec.end());

        cout<<vec[k/2]<<" ";
        
        vector<ll>::iterator it = find(vec.begin(),vec.end(),arr[i]);
        vec.erase(it);
    }
    return 0;
}