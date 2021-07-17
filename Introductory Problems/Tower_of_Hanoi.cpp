#include<bits/stdc++.h>
#define ll long long
using namespace std;
void TOH(int source,int helper,int destination,int n)
{
    if(n>0)
    {
        TOH(source,destination,helper,n-1);
        cout<<source<<" "<<destination<<"\n";
        TOH(helper,source,destination,n-1);
    }
}
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    ll n;cin>>n;

    cout<<pow(2,n)-1<<"\n";

    TOH(1,2,3,n);
    return 0;
}