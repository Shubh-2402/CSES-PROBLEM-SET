#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    ll n,count=0;
    cin>>n;

    set<ll> st;

    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;

        st.insert(x);
    }
    cout<<st.size();
    
    return 0;
}