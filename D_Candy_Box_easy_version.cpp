#include<bits/stdc++.h>

using namespace std;
#define int long long int

int32_t main() {
    int t = 1;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int a[n], f[n] = {
            0
        };

        for (int i = 0; i < n; i++) {
            cin >> a[i];
            f[a[i] - 1]++;
        }
        sort(f, f + n);
        
        int res = f[n - 1];
        for (int i = n - 2; i >= 0; i--) {
            if (f[i] >= f[i + 1]) {
                f[i] = max(f[i + 1] - 1, 0LL);
            }
            res += f[i];
        }
        
        cout << res << "\n";
    }
}