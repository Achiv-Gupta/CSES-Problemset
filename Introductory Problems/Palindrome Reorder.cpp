#include<bits/stdc++.h> 
using namespace std;
typedef long long ll;
#define int long long
#define fast_io ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0)


void solve()
{
    string s;
    cin >> s;
    vector<int> a(26);
    for(char c : s) 
        a[c - 'A']++;
    int check = 0;
    for(int i = 0; i < 26; i++) 
        check += (a[i] % 2);
    if(check > 1){
        cout << "NO SOLUTION";
        return;
    }
    string result;
    for (int i = 0; i < 26; i++){
        if(!(a[i]%2)){
            for(int j = 0; j < a[i]/2; j++) 
                result.push_back(i + 'A');
        }
    }
    for (int i = 0; i < 26; i++){
        if(a[i]%2){
            for(int j = 0; j < a[i]; j++) 
                result.push_back(i + 'A');
        }
    }
    for (int i = 25; i >= 0; i--){
        if(!(a[i]%2)){
            for(int j = 0; j < a[i]/2; j++) 
                result.push_back(i + 'A');
        }
    }

    cout << result << endl;
}


signed main()
{
	fast_io;
	int t=1;
	while(t--) solve();
}
