#include<bits/stdc++.h>
using namespace std;
#define ll long long

template <class T>
void print_v(vector<T> &v) 
{ 
    cout << "{"; for (auto x : v) cout << x << ","; cout << "\b}"; 
}
ll gcd(ll a,ll b) { if (b==0) return a; return gcd(b, a%b); }
ll lcm(ll a,ll b) { return a/gcd(a,b)*b; }
string to_upper(string a) { for (int i=0;i<(int)a.size();++i) if (a[i]>='a' && a[i]<='z') a[i]-='a'-'A'; return a; }
string to_lower(string a) { for (int i=0;i<(int)a.size();++i) if (a[i]>='A' && a[i]<='Z') a[i]+='a'-'A'; return a; }
bool prime(ll a) { if (a==1) return 0; for (int i=2;i<=round(sqrt(a));++i) if (a%i==0) return 0; return 1; }
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int maxi=0;
        vector<int>pages(n);
        for(auto &i:pages)
        {
            cin>>i;
            maxi=max(maxi,i);
        }
        if(pages[n-1]!=maxi)
            cout<<maxi+pages[n-1]<<endl;
        else
        {
            int maxi1=maxi;
            int maxi=0;
            int i=n-2;
            for(int i=n-2;i>=0;i--)
            {
                maxi=max(maxi,pages[i]);
            }
            cout<<maxi1+maxi<<endl;
        }
    }
}