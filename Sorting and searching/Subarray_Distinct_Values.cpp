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

    ll i=0,j=0,count=0;

    set<ll> st;

    deque<ll> sub;

    while(i<n && j<n)
    {
        st.insert(arr[j]);
        sub.push_back(arr[j]);
        j++;

        if(st.size()<=k)
        count++;
        else
        {
            st.erase(sub.front());
            sub.pop_front();

            if(st.size()<=k)
            count++;
        }
    }

    cout<<count+n;
    
    return 0;
}