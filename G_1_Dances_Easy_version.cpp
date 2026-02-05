// Online C++ compiler to run C++ program online
#include<bits/stdc++.h>

using namespace std;

#define int long long int
int32_t main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;

        int a[n], b[n];
        a[0] = m;
        for (int i = 1; i < n; i++) cin >> a[i];
        for (auto & i: b) cin >> i;

        sort(a, a + n);
        sort(b, b + n);
        int res = 0, i = 0, j = 0;

        while (j < n) {
            if (a[i] < b[j]) {
                i++;
                j++;
            }
            else {
                while (j < n && a[i] >= b[j]) {
                    j++;
                    res++;
                }
            }
        }
        cout << res << "\n";
    }
}