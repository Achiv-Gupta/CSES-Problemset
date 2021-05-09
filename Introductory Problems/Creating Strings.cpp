#include<bits/stdc++.h> 
using namespace std;
typedef long long ll;
#define int long long
#define fast_io ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0)

void solve()
{
    string s;
    cin >> s;
    sort(s.begin(), s.end());
    bool val = true;
    vector<string> ans;
    while(val){
        ans.push_back(s);
        val = next_permutation(s.begin(), s.end());
    }
    cout << ans.size() << endl;
    for(auto i : ans){
        cout << i << endl;
    }
}


signed main()
{
	fast_io;
	int t=1;
	while(t--) solve();
}
