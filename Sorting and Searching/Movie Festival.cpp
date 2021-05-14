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
    int n;
    cin>>n;
    vector<pair<int,int>> movies;
    f(i,n){
        int t1,t2;
        cin >> t1 >> t2;
        movies.push_back(make_pair(t2,t1));
    }
    int end_time = 0, ans = 0;
    sort(movies.begin(), movies.end());
    for(auto i:movies){
        if(i.ss >= end_time){
            ans++;
            end_time = i.ff;
        }
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
