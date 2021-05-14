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
    int n,m;
    cin >> n >> m;
    multiset<int,greater<int>> h;
    f(i,n){
        int temp;
        cin >> temp;
        h.insert(temp);
    }
    f(i,m){
        int temp; 
        cin >> temp;
        auto ans = h.lower_bound(temp);
        if(ans == h.end()){
            cout << -1;
        }else{
            cout<<*ans;
            h.erase(ans);
        }
        cout <<endl;
    }
}
 
 
signed main()
{
	fast_io;
	int t=1;
    // cin>>t;
	while(t--) solve();
}
