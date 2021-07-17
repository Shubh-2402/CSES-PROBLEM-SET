#include<iostream>
#define ll long long int
using namespace std;
int main()
{
    ll n,zeros=0;
    cin>>n;

    for(ll i=5;n/i>=1;i*=5)
    {
        zeros+= n/i;
    }
    cout<<zeros;
}