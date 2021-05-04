#include<bits/stdc++.h> 
using namespace std;
typedef long long ll;
#define int long long
#define fast_io ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0)


void solve()
{
    string s;
    cin >> s;
    int temp = 1, ans = 1;
    for(int i = 1 ; i<s.length() ; ++i){
        if(s[i] == s[i-1]){
           temp++;
        }
        else{
            temp = 1;
        }
        ans = max(ans, temp);
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
