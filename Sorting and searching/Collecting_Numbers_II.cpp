#include<bits/stdc++.h>
#define ll long long
using namespace std;
void swap(ll &x,ll &y)
{
    ll temp=x;
    x=y;
    y=temp;
}
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    ll n,m;
    cin>>n>>m;

    ll arr[n+1];

    vector<pair<int,int>> v;

    for(int i=1;i<=n;i++)
    {
        cin>>arr[i];

        v.push_back(make_pair(arr[i],i));
    }

    sort(v.begin(),v.end());

    // for(int i=0;i<n;i++)
    // {
    //     cout<<v[i].first<<" "<<v[i].second<<"\n";
    // }

    while(m--)
    {
        ll i,j;
        cin>>i>>j;

        v[arr[i]-1].second=j;
        v[arr[j]-1].second=i;

        swap(arr[i],arr[j]);

        ll current=v[0].second,rounds=1;

        for(int i=1;i<n;i++)
        {
            if(v[i].second<current)
            {
                rounds++;
            }
            current=v[i].second;
        }
        cout<<rounds<<"\n";
    }
    return 0;
}