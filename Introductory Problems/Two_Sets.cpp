#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    ll n;
    cin>>n;

    ll sum=(n*(n+1))/2;

    if(sum&1)
    cout<<"NO\n";
    else
    {
        cout<<"YES\n";

        ll ans =sum/2;

        vector<int> a,b;

        for(int i=n;i>0;i--)
        {
            if(i<=ans)
            {
                a.push_back(i);
                ans-=i;
            }
            else
            {
                b.push_back(i);
            }
        }

        cout<<a.size()<<"\n";
        for(int i=0;i<a.size();i++)
        cout<<a[i]<<" ";

        cout<<"\n"<<b.size()<<"\n";

        for(int i=0;i<b.size();i++)
        cout<<b[i]<<" ";

    }
    
    return 0;
}