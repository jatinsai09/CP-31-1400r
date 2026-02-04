// Online C++ compiler to run C++ program online
#include<bits/stdc++.h>

using namespace std;

#define int long long int
int32_t main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;

        int a[n];
        for (auto & i: a) cin >> i;

        if (k > 2) {
            cout << 0 << endl;
            continue;
        }

        sort(a, a + n);
        int mind = a[0];
        for (int i = 0; i < n - 1; i++) {
            mind = min(mind, a[i + 1] - a[i]);
        }

        if (k == 1) {
            cout << mind << "\n";
            continue;
        }
        
        vector<int> dif;
        for (int i = 0; i < n; i++) {
            for (int j = i + 1; j < n; j++) {
                dif.push_back(a[j] - a[i]);
            }
        }
        sort(begin(dif), end(dif));

        for (int i = 0; i < n; i++) {
            auto it = lower_bound(begin(dif), end(dif), a[i]);
            if (it != end(dif)) {
                mind = min(mind, *it - a[i]);
            } 
            if (it != begin(dif)) {
                it--;
                mind = min(mind, a[i] - *it);
            }
        }

        cout << mind << "\n";
    }
}