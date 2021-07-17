#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    ll n;
    cin>>n;

    ll A[n];

    for (int i = 0; i < n; i++)
    {
        cin>>A[i];
    }

    ll best=0,sum=0,maxx=A[0];
    bool flag = false;

    for(int i = 0; i < n; i++)
    {
        sum=max(A[i],sum+A[i]);
        best = max(best,sum);

        if(A[i]>0)
        flag = true;

        maxx=max(maxx,A[i]);
    }

    if(flag)
    cout<<best;
    else
    cout<<maxx;
    
    return 0;
}