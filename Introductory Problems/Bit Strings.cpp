#include<bits/stdc++.h> 
using namespace std;
typedef long long ll;
#define int long long
#define MOD 1000000007
#define fast_io ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0)


void solve()
{
    int n;
    cin >> n;
    int ans = 1;
    for(int i = 0 ; i<n ; i++){
        ans *= 2;
        ans %= MOD;
    }
    cout << ans;
}


signed main()
{
	fast_io;
	int t=1;
    // cin>>t;
	while(t--) solve();
}
