#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    ll t;
    cin>>t;

    while (t--)
    {
        ll a,b;
        cin>>a>>b;

        if(a>b)
        swap(a,b);

        if((a+b)%3==0) 
        {
            if(2*a<b)
            cout<<"NO\n";
            else
            cout<<"YES\n";
        }
        else
        cout<<"NO\n";
            
    }
    return 0;
}