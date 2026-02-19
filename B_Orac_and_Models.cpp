#include<bits/stdc++.h>

using namespace std;
#define int long long int
int a[100004], dp[100004], n;

int answer(int ind) {
    if (ind > n) {
        return 0;
    }
    if (dp[ind] != -1) return dp[ind];
    int res = 0;
    for (int i = 2 * ind; i <= n; i += ind) {
        if (a[i] > a[ind]) res = max(res, 1 + answer(i));
    }
    return dp[ind] = res;
}


int32_t main() {
    int t = 1;
    cin >> t;
    while (t--) {
        cin >> n;
        for (int i = 1; i <= n; i++) {
            cin >> a[i];
            dp[i] = -1;
        }

        int maxi = 1;
        for (int i = 1; i <= n; i++) {
            maxi = max(maxi, 1 + answer(i));
        }
        cout << maxi << endl;
    }
}