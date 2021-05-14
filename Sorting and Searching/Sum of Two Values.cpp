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
    int n,x;
    cin >> n>> x;
    pair<int,int> a[n];
    f(i,n){
        int temp;
        cin >> temp; 
        a[i] = make_pair(temp,i);
    }
    sort(a,a+n);
    int i = 0 , j = n-1;
    bool ans = false;
    while(i<j){
        if((a[i].ff+a[j].ff) == x){
            cout << (a[i].ss+1) << " " << (a[j].ss+1)<< endl;
            ans = true;
            i++;
            j--;
        }else if((a[i].ff+a[j].ff) < x){
            i++;
        }else{
            j--;
        }
    }
    if(!ans) cout << "IMPOSSIBLE" << endl;
    // cout << ans;
}
 
 
signed main()
{
	fast_io;
	int t=1;
    // cin>>t;
	while(t--) solve();
}
