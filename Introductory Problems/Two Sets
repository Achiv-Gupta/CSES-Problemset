#include<bits/stdc++.h> 
using namespace std;
typedef long long ll;
#define int long long
#define fast_io ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0)
 
 
void solve()
{
    int n;
    cin >> n;
    int total = n * (n + 1) / 2;
    if (total & 1)
    {
        cout << "NO";
    }
    else
    {
        cout << "YES" << endl;
        vector<int> arr1, arr2;
        total /= 2;
        while (n)
        {
            if (total - n >= 0)
            {
                arr1.push_back(n);
                total -= n;
            }
            else
            {
                arr2.push_back(n);
            }
            n--;
        }
        cout << arr1.size() << endl;
        for (auto i : arr1)
            cout << i << " ";
        cout << endl;
        cout << arr2.size() << endl;
        for (auto i : arr2)
            cout << i << " ";
    }
}
 
 
signed main()
{
	fast_io;
	int t=1;
    // cin>>t;
	while(t--) solve();
}
