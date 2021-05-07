#include<bits/stdc++.h> 
using namespace std;
typedef long long ll;
#define int long long
#define fast_io ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0)


void solve()
{
    int x,y;
    cin >> x >> y;
    if (x < y){
        if (y % 2 == 1)
            cout << (y*y) - x + 1;
        else
            cout << ((y - 1) * (y - 1) + 1) + x - 1;
    }
    else{
        if (x % 2 == 0)
            cout << (x * x) - y + 1;
        else
            cout << ((x - 1) * (x - 1) + 1) + y - 1;
    }
    cout << endl;
}


signed main()
{
	fast_io;
	int t=1;
    cin>>t;
	while(t--) solve();
}
