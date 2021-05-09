#include<bits/stdc++.h> 
using namespace std;
typedef long long ll;
#define int long long
#define fast_io ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0)

void tower(int a,int b, int c, int n)
{
    if (n == 0)
    return;
    tower(a, c, b, n-1);
    cout<<a<<' '<<c<<endl;
    tower(b, a, c, n-1);
}

void solve()
{
    int n;
    cin >> n;
    cout << (1<<n)-1 << endl;
    // above makes a number of 2 to the power n then subtracts one;
    tower(1,2,3,n);
}


signed main()
{
	fast_io;
	int t=1;
    // cin>>t;
	while(t--) solve();
}
