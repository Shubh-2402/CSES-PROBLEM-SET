#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    ll n;
    cin>>n;

    vector<pair<int,int>> v;

    for(ll i=0;i<n;i++)
    {
        ll x;
        cin>>x;

        pair<int,int> p(x,i);
        v.push_back(p);
    }

    sort(v.begin(),v.end());

    ll current=v[0].second,rounds=1;

    for(int i=1;i<n;i++)
    {
        if(v[i].second<current)
        {
            rounds++;
        }
        current=v[i].second;
    }
    cout<<rounds;
}