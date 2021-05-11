#include<bits/stdc++.h> 
using namespace std;
typedef long long ll;
#define int long long
#define fast_io ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0)

void solve()
{
    int n;
    cin >> n;
    set<int> ans;
    for(int i = 0 ; i<n ; ++i){
        int temp;
        cin >> temp;
        ans.insert(temp);
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
