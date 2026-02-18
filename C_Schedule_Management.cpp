#include<bits/stdc++.h>

using namespace std;
#define int long long int

int32_t main() {
    int t;
    cin >> t;
    while (t--) {
        int x, n, m;
        cin >> n >> m;
        vector < int > a(n, 0);
        for (int i = 0; i < m; i++) {
            cin >> x;
            x--;
            a[x]++;
        }
        
        int lo = 1, hi = m * 2, mid;
        while (lo <= hi) {
            mid = lo + (hi - lo) / 2;
            int have = 0, need = 0;
            for (int i = 0; i < n; i++) {
                if (a[i] <= mid) {
                    have += ((mid - a[i]) / 2);
                }
                else {
                    need += (a[i] - mid);
                }
            }
            if (have >= need) {
                hi = mid - 1;
            }
            else {
                lo = mid + 1;
            }
        }
        cout << lo << "\n";
    }
}