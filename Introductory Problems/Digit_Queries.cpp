#include<bits/stdc++.h>
#include<string>
#define ll long long
using namespace std;
string prefix;
const ll N=1e18;
void pre()
{
    ll i=1;

    while(prefix.length()<=N)
    {
        prefix = prefix + to_string(i);
        i++;
    }
}
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    pre();

    ll q;
    cin>>q;

    for(int i=0;i<q;i++)
    {
        ll k;
        cin>>k;

        cout<<prefix[k-1]<<"\n";
    }
    return 0;
}