// Online C++ compiler to run C++ program online
#include<bits/stdc++.h>

using namespace std;
#define int long long int
int32_t main() {
    int t;
    cin >> t;
    while (t--) {
        int n, lo = 0, hi = 1e9, k;
        cin >> n;
        int r[n], l[n];
        for (int i = 0; i < n; i++) {
            cin >> l[i] >> r[i];
        }

        while (lo <= hi) {
            k = lo + (hi - lo) / 2;
            int leftk = 0, rightk = 0, flag = 1;
            for (int i = 0; i < n; i++) {
                leftk = max(leftk - k, l[i]);
                rightk = min(rightk + k, r[i]);

                if (leftk > rightk) {
                    flag = 0;
                    break;
                }
            }

            if (flag) {
                hi = k - 1;
            }
            else {
                lo = k + 1;
            }
        }
        cout << lo << "\n";
    }
}