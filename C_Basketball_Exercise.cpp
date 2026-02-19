#include<bits/stdc++.h>

using namespace std;
#define int long long int

int32_t main() {
    int t = 1;
    //cin>>t;
    while (t--) {
        int n;
        cin >> n;
        
        int h[2][n + 1], dp[2][n + 1];
        dp[0][0] = dp[1][0] = 0;

        for (int i = 1; i <= n; i++) cin >> h[0][i];
        for (int i = 1; i <= n; i++) cin >> h[1][i];

        for (int i = 1; i <= n; i++) {
            dp[0][i] = max(dp[0][i - 1], dp[1][i - 1] + h[0][i]);
            dp[1][i] = max(dp[1][i - 1], dp[0][i - 1] + h[1][i]);
        }
        cout << max(dp[0][n], dp[1][n]);
    }
}