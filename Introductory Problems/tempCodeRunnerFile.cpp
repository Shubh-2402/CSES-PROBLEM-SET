#include<iostream>
using namespace std;
#define ll long long int
int main()
{
    ll n,moves=0;
    cin>>n;

    ll X[n];

    for(ll i=0;i<n;i++)
    cin>>X[i];

    for(ll i =1;i<n;i++)
    {
        if(X[i]<X[i-1])
        {
            moves+=X[i-1]-X[i];
        }
    }
    cout<<moves;
}