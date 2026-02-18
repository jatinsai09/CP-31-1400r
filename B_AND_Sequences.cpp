#include<bits/stdc++.h>

using namespace std;
#define int long long int

int32_t main() {
    int t = 1, MOD = 1e9 + 7;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int a[n];
        for (auto & i: a) {
            cin >> i;
        }
        int mini = * min_element(a, a + n);

        int c = 0, flag = 1;
        for (auto & i: a) {
            if ((mini & i) != mini) {
                flag = 0;
                break;
            }
            if (i == mini) c++;
        }
        
        if (!flag) {
            cout << 0 << "\n";
        }
        else {
            int cnt = (1LL * c * (c - 1)) % MOD;
            int fact = 1;
            for (int i = 1; i <= n - 2; i++) {
                fact = (1LL * fact * i) % MOD;
            }
            cout << (1LL * cnt * fact) % MOD << "\n";
        }
    }
}