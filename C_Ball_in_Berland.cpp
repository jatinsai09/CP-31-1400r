#include<bits/stdc++.h>

using namespace std;
#define int long long int

int32_t main() {
    int t = 1;
    cin >> t;
    while (t--) {
        int a, b, k;
        cin >> a >> b >> k;

        int bo[k], gi[k], c1[a + 1] = {
            0
        }, c2[b + 1] = {
            0
        };
        
        for (auto & i: bo) {
            cin >> i;
            c1[i]++;
        }
        for (auto & i: gi) {
            cin >> i;
            c2[i]++;
        }

        int res = 0;
        for (int i = 0; i < k; i++) {
            res += (k - (c1[bo[i]] + c2[gi[i]] - 1));
        }
        cout << res / 2 << "\n";
    }
}