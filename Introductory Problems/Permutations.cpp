#include<bits/stdc++.h> 
using namespace std;
typedef long long ll;
#define int long long
#define fast_io ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0)


void solve()
{
    int n;
    cin >> n;
    if(n!=1 && n<4){
        // see this obervation trying to find the solutions to 2 and 3
        cout << "NO SOLUTION";
    }
    else{
        for(int i = 2; i<=n ; i=i+2){
            cout << i << " ";
        }
        for(int i = 1; i<=n ; i=i+2){
            cout << i << " ";
        }
        
    }
}


signed main()
{
	fast_io;
	int t=1;
    // cin>>t;
	while(t--) solve();
}
