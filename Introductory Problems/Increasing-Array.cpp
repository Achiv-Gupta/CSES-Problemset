#include<bits/stdc++.h> 
using namespace std;
typedef long long ll;
#define int long long
#define fast_io ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0)


void solve()
{
    int n, max = 0, ans = 0;
    cin >> n;
    for(int i = 0 ; i<n ; ++i){
        int temp;
        cin >> temp;
        if(temp > max){
            max = temp;
        }else{
            ans += max-temp;
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
