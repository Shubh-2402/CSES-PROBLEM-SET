#include<bits/stdc++.h>
#define ll long long
using namespace std;
void helper(string s,vector<string> &ans,int index)
{
    if(index==s.size())
    {
        ans.push_back(s);
        return;
    }

    for(int i=index;i<s.size();i++)
    {
        if(i!=index && s[i]==s[index])
        continue;

        swap(s[i],s[index]);
        helper(s,ans,index+1);
    }
    return;
}
vector<string> permute(string s)
{
    sort(s.begin(),s.end());

    vector<string> ans;

    helper(s,ans,0);

    return ans;
}
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    string s;
    cin>>s;

    vector<string> ans = permute(s);   

    cout<<ans.size()<<"\n";
    
    for(auto &s:ans)
    cout<<s<<"\n";

    return 0;
}