#include<bits/stdc++.h>
#define ll long long
using namespace std;
ll linearSearch(ll arr[],ll n,ll key)
{
    for(ll i=0;i<n;i++)
    {
        if(arr[i]==key)
        return i+1;
    }
    return -1;
}
ll revLinearSearch(ll arr[],ll n,ll key)
{
    for(ll i=n-1;i>=0;i--)
    {
        if(arr[i]==key)
        return i+1;
    }
    return -1;
}
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    ll n,x;
    cin>>n>>x;

    ll arr[n],temp[n];

    for(ll i=0;i<n;i++)
    {   
        cin>>arr[i];
        temp[i]=arr[i];
    }

    sort(temp,temp+n);

    ll i=0,j=n-1;

    while(i<j)
    {
        if(temp[i]+temp[j]==x)
        break;
        if(temp[i]+temp[j]<x)
        i++;
        else
        j--;
    }

    if(i==j)
    cout<<"IMPOSSIBLE";
    else
    {
        if(temp[i]==temp[j])
        {
            ll idx1=linearSearch(arr,n,temp[i]),idx2=revLinearSearch(arr,n,temp[j]);
            cout<<idx1<<" "<<idx2;
        }
        else
        cout<<linearSearch(arr,n,temp[i])<<" "<<linearSearch(arr,n,temp[j]);
    }
    return 0;
}