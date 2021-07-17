#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    ll n;
    cin>>n;

    ll arr[n];

    for(ll i=0;i<n;i++)
    cin>>arr[i];

    set<ll> st;

    deque<ll> sequence;

    ll maxLength=INT_MIN,length=0;

    for(ll i=0;i<n;i++)
    {
        if(st.count(arr[i]))
        {
            while(sequence.front()!=arr[i])
            {
                st.erase(sequence.front());
                sequence.pop_front();
                length--;
            }
            sequence.pop_front();
            sequence.push_back(arr[i]);
        }
        else
        {
            st.insert(arr[i]);
            sequence.push_back(arr[i]);
            length++;
            maxLength=max(maxLength,length);
        }
    }

    cout<<maxLength;

    return 0;
}