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
    int n,temp = 0,ans = 0;
    cin >> n;
    int entry[n],exit[n];
    f(i,n)  cin >> entry[i] >> exit[i];
    sort(entry,entry+n);
    sort(exit,exit+n);
    int i = 0, j = 0 ;
    while(i<n){
        if(entry[i] < exit[j]){
            temp++;
            i++;
        }else{
            temp--;
            j++;
        }
        ans = max(temp,ans);
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
