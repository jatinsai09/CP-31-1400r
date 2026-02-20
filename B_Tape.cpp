#include<bits/stdc++.h>

using namespace std;
#define int long long int

int32_t main() {
    int t = 1;
    //cin>>t;
    while (t--) {
        int n, m, k, x;
        cin >> n >> m >> k;
        
        vector < int > v(n), d;
        for (auto & i: v) cin >> i;
        
        int total = v[n - 1] - v[0] + 1;
        for (int i = 1; i < n; i++) {
            x = (v[i] - v[i - 1] - 1);
            d.push_back(x);
        }
        sort(rbegin(d), rend(d));

        for (int i = 0; i < k - 1; i++) {
            total -= d[i];
        }
        cout << total;
    }
}