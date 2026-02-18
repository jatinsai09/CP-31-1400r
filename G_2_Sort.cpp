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
        int res = 0, c = 1;
        for (int i = 1; i < n; i++) {
            if (a[i - 1] < 2LL * a[i]) c++;
            else c = 1;

            if (c > k) res++;
        }
        cout << res << "\n";
    }
}