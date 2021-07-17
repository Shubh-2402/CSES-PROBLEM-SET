#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    string str,ans="";
    cin>>str;

    vector<int> freq(26);

    
    for(int i=0;i<26;i++)
    {
        freq[i]=0;
    }

    for(auto ch:str)
    freq[ch-'A']++;

    int o=0;
    for(int i=0;i<26;i++)
    {
        if(freq[i]&1)
        o++;

    }
    if(o>1)
    {
        cout<<"NO SOLUTION";
    }
    else
    {
        vector<char> even,odd;

        for(int i=0;i<26;i++)
        {
            char c='A'+i;

            if(freq[i]&1)
            {
                while (freq[i]--)
                {
                    odd.push_back(c);
                }
            }
            else
            {
                int count =freq[i]/2;

                while (count--)
                {
                    even.push_back(c);
                }                
            }            
        }

        for(int i=0;i<even.size();i++)
        cout<<even[i];

        for(int i=0;i<odd.size();i++)
        cout<<odd[i];

        for(int i=even.size()-1;i>=0;i--)
        cout<<even[i];

    }

    return 0;
}