#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    string s;
    cin>>s;

    ll n=s.length(),maxRep=INT_MIN,currRep=1;


    if(n>1)
    {
        for(int i=0;i<n-1;i++)
        {
        if(s[i]==s[i+1])
        currRep++;
        else
        currRep=1;

        maxRep= max(maxRep,currRep);
        } 
    }
    else
    {
        maxRep=n;
    }
    cout<<maxRep;
    return 0;
}