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
        int count1=0,count2=0;
        vector<int>a(n),b(n);
        for(auto &i:a)
            cin>>i;
        for(auto &j:b)
            cin>>j; 
        for(int i=0;i<n;i++)
        {
            if(a[i]!=b[i])
            {
                if(a[i]>b[i])
                    count1+=a[i];
                else
                    count2+=b[i];
            }
        }
        for(int i=0;i<n;i++)
        {
            if(a[i]==b[i] && a[i]==1)
            {
                if(count1<count2)
                    count1++;
                else
                    count2++;
            }
            else if(a[i]==b[i] && a[i]==-1)
            {
                if(count1<count2)
                    count2--;
                else
                    count1--;
            }
        }
        cout<<min(count1,count2)<<endl;
    }
}