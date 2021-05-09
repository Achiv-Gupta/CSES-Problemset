#include<bits/stdc++.h> 
using namespace std;
typedef long long ll;
#define int long long
#define fast_io ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0)


void solve()
{
    int x,y;
    cin >> x >> y;
    if((x+y)%3==0){
        if((2*min(x,y)) >= (max(x,y))){
            cout << "YES";
        }else{
            cout << "NO";
        }
    }else{
        cout << "NO";
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
