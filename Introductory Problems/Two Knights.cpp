#include<bits/stdc++.h> 
using namespace std;
typedef long long ll;
#define int long long
#define fast_io ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0)


void solve()
{
    int n;
    cin>>n;
    for (int i = 1; i <= n; ++i)
    {
        cout << i * i * (i * i - 1) / 2 - 4 * (i - 1) * (i - 2) << endl;
    }
}


signed main()
{
	fast_io;
	int t=1;
    // cin>>t;
	while(t--) solve();
}
