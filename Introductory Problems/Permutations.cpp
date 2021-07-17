#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    ll n;
    cin>>n;

    if(n==1)
    cout<<n;
    else if(n==2 || n==3)
    cout<<"NO SOLUTION";
    else
    {
        if(n&1)
        {
            for(int i=1;i<=n;i+=2)
            cout<<i<<" ";
            for(int i=2;i<=n;i+=2)
            cout<<i<<" ";
        }
        else
        {
            for(int i=2;i<=n;i+=2)
            cout<<i<<" ";
            for(int i=1;i<=n;i+=2)
            cout<<i<<" ";
        }
        
    }    
    return 0;
}