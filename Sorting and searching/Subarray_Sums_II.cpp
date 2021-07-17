#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    ll n,x;
    cin>>n>>x;

    ll arr[n];

    for(int i=0;i<n;i++)
    cin>>arr[i];

    deque<ll> subarray;

    ll i=0,j=0,sum=0,count=0;

    while(i<n && j<n)
    {
        while(sum<x)
        {
            sum+=arr[j];
            j++;
        }

        if(sum==x)
        {
            count++;
            sum+=arr[j];
            j++;
        }

        while(sum>x)
        {
            sum-=arr[i];
            i++;
        }

        if(sum==x)
        {
            count++;
            sum-=arr[i];
            i++;
        }
        
    }

    cout<<count;

    return 0;
}