#include<bits/stdc++.h>
#define ll long long
vector<ll> subset;
ll minDiff = INT_MAX;
ll diff;
ll sum=0;
ll arraySum=0;
ll n;
using namespace std;
void search(ll k,ll sum)
{
    if(k==n+1);
    {
        diff=sum-arraySum;
        minDiff=min(minDiff,diff);
    }

    subset.pushback()
}
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    cin>>n;

    ll arr[n];

    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        sum+=arr[i];
    }

    search(0,sum);
}