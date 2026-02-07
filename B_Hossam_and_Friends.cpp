#include<bits/stdc++.h>

using namespace std;
#define int long long int
int32_t main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m, x, y;
        cin >> n >> m;
        
        vector < int > v(n + 1, 0);
        for (int i = 1; i <= m; i++) {
            cin >> x >> y;
            if (x < y) swap(x, y);
            v[x] = max(v[x], y);
        }
        for (int i = 1; i <= n; i++) {
            v[i] = max(v[i], v[i - 1]);
        }
        
        int res = 0;
        for (int i = 1; i <= n; i++) {
            res += (i - v[i]);
        }
        
        cout << res << "\n";
    }
}