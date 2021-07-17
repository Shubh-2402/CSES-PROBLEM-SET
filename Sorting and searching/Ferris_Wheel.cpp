#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    ll n,x,count=0;
    cin>>n>>x;

    ll arr[n];

    for(int i=0;i<n;i++)
    cin>>arr[i];

    sort(arr,arr+n);

    ll i=0,j=n-1;

    while(i<j)
    {
        if(arr[i]+arr[j]>x)
        {
            count++;
            j--;
        }
        else
        {
            count++;
            i++;
            j--;
        }
    }
    if(i==j)
    count++;

    cout<<count;
    return 0;
}