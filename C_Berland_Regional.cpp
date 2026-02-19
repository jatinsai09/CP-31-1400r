#include<bits/stdc++.h>

using namespace std;
#define int long long int

int32_t main() {
    int t = 1;
    cin >> t;
    while (t--) {
        int n, x;
        cin >> n;
        vector < int > u(n);
        map < int, vector < int >> mp;
        vector < int > res(n, 0);

        for (int i = 0; i < n; i++) {
            cin >> u[i];
        }

        for (int i = 0; i < n; i++) {
            cin >> x;
            mp[u[i] - 1].push_back(x);
        }

        for (auto it: mp) {
           vector < int > & v = it.second;
           sort(rbegin(v), rend(v));

           int m = v.size();    
           vector< int > pref(m + 1, 0);
           for (int i = 0; i < m; i++) {
               pref[i + 1] = pref[i] + v[i];
           }

           for (int i = 1; i <= m; i++) {
               res[i - 1] += pref[(m / i) * i];
           }
        }

        for (auto& i: res) {
            cout << i << " ";
        }
        cout << endl;
    }
}