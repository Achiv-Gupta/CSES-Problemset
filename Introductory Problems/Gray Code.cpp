#include<bits/stdc++.h> 
using namespace std;
typedef long long ll;
#define int long long
#define fast_io ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0)

void GreyCode(int n)
{
    for (int i = 0; i < (1 << n); i++)
    {
        int val = (i ^ (i >> 1));
        bitset<32> r(val);
        string s = r.to_string();
        cout << s.substr(32 - n) << endl;
    }
}

void solve()
{
    int n;
    cin >> n;
    GreyCode(n);
}


signed main()
{
	fast_io;
	int t=1;
    // cin>>t;
	while(t--) solve();
}
