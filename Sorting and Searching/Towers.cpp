#include<bits/stdc++.h> 
using namespace std;
typedef long long ll;
#define int long long
#define fill(a,m) for(int i = 0; i<m ;++i) cin >> a[i]
#define f(i,n) for(int i = 0 ; i<n ; ++i) 
#define endl '\n'
#define MOD 1000000007
// #define MOD 998244353
#define pbb push_back
#define mpp make_pair
#define ff first
#define ss second
#define all(x) x.begin(),x.end()
#define mset(arr,val) memset(arr,val,sizeof(arr))
#define fast_io ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0)
 
void solve()
{
    int n, k;
    cin >> n;
    multiset<int> ans;
    for (int i=0;i<n;++i) {
        cin >> k;
        auto it = ans.upper_bound(k);
        if (it==ans.end()) ans.insert(k);
        else {
            ans.erase(it);
            ans.insert(k);
        }
    }
    cout << ans.size();
}
 
 
signed main()
{
    fast_io;
    int t=1;
    // cin>>t;
    while(t--) solve();
}
