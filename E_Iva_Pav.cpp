#include<bits/stdc++.h>

using namespace std;
#define int long long int
int32_t main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int a[n], b[n][33];
        for (int i = 0; i < n; i++) {
            cin >> a[i];
            for (int j = 32; j >= 0; j--) {
                if (((1LL << j) & a[i]) == 0) b[i][j] = 1;
                else b[i][j] = 0;
            }
        }

        for (int i = 1; i < n; i++) {
            for (int j = 0; j < 33; j++) {
                b[i][j] += b[i - 1][j];
            }
        }

        int q, l, k;
        cin >> q;
        while (q--) {
            cin >> l >> k;
            l--;
            int hi = n - 1, lo = l, res = -1, mid;
            while (lo <= hi) {
                mid = lo + (hi - lo) / 2;

                int x = 0;
                for (int i = 0; i < 33; i++) {
                    if (b[mid][i] - (l == 0 ? 0 : b[l - 1][i]) == 0) {
                        x += (1LL << i);
                    }
                }

                if (x >= k) {
                    lo = mid + 1;
                    res = mid + 1;
                }
                else {
                    hi = mid - 1;
                }
            }
            cout << res << " ";
        }
        cout << "\n";
    }
}