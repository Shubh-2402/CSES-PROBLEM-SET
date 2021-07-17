#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    ll n;
    cin>>n;

    ll arr[n+1];

    for(ll i=1;i<=n;i++)
    cin>>arr[i];

    stack<pair<ll,ll>> st;

    for(ll i=1;i<=n;i++)
    {
        while (!st.empty() && st.top().first>=arr[i])
        {
            st.pop();
        }

        if(st.empty())
        {
            cout<<"0 ";
        }
        else
        {
            cout<<st.top().second<<" ";
        }

        st.push(make_pair(arr[i],i));
        
    }
    return 0;
}