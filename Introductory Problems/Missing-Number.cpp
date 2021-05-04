#include<bits/stdc++.h> 
using namespace std;
typedef long long ll;
#define int long long
#define fast_io ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0)


void solve()
{
    int n,sum = 0;
    cin >> n;
    for(int i = 0; i<(n-1) ; ++i){
        int temp;
        cin >> temp;
        sum += temp;
    }    
    // sum_of_first_n_numbers = ((n)*(n+1)/2)
    int ans = ((n)*(n+1)/2)-sum;
    cout << ans;
}


signed main()
{
  // generic code
	fast_io;
	int t=1;
    // cin>>t;
	while(t--) solve();
}
