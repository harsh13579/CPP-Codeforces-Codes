#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long t;
    cin>>t;
    while(t--)
    {
        vector<int>v(3);
        for(auto &i : v)
        cin>>i;
        sort(v.begin(), v.end());
        cout<<v[1]<<endl;

    }
}

