#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        string s;
        cin>>s;
        long long ans=0;
        ans+=s.size();
        for(int i=1; i<n; i++)
        {
            if(s[i]!=s[i-1])
                ans+=i;
        }
        cout<<ans<<endl;
    }
}