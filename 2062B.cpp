#include <bits/stdc++.h>
using namespace std;
 
typedef long long ll;
 
vector<vector<int>> adj;
vector<int> vi;
vector<int> color;
vector<bool> vis;
 
void solve() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++) {
        if (a[i] <= i * 2 || a[i] <= (n - i - 1) * 2) {
            cout << "NO" << endl;
            return;
        } 
    }
    cout << "YES" << endl;
}
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
     int t;
     cin>>t;
    while(t--){
        solve();
    }
 
    return 0;
}
