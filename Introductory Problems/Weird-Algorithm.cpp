#include<bits/stdc++.h> 
using namespace std;
typedef long long ll;
#define int long long
#define fast_io ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0)


void solve()
{
    int n;
    cin >> n;
    while(n!=1){
        cout << n << " ";
        if(n&1){
            // best way to find if a number is even or odd using bit manipulation
            n = (n*3)+1;
        }else{
            n = n/2;
        }
    }
    cout << 1;
    return;
}


signed main()
{
    //generic main function in competitive coding
	fast_io;
	int t=1;
    // cin>>t;
	while(t--) solve();
}
