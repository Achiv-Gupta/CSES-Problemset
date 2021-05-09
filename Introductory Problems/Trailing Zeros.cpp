#include<bits/stdc++.h> 
using namespace std;
typedef long long ll;
#define int long long
#define fast_io ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0)


void solve()
{
    double n;
    cin >> n;
    int ans = 0;
    double curr_ans = n;
    while(curr_ans != 0){
        curr_ans = floor(curr_ans/5.0);
        ans += floor(curr_ans);
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
