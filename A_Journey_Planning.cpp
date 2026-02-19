#include<bits/stdc++.h>

using namespace std;
#define int long long int

int answer(int n, vector < int > & b) {
    unordered_map < int, int > dp;
    int max_b = 0, key, cur_b;

    for (int i = 0; i < n; i++) {
        key = i - b[i];
        cur_b = b[i];

        if (dp.find(key) != dp.end()) {
            cur_b = b[i] + dp[key];
        }

        dp[key] = max(dp[key], cur_b);
        max_b = max(dp[key], max_b);
    }
    return max_b;
}

int32_t main() {
    int t = 1;
    //cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector < int > b(n);
        for (auto & i: b) cin >> i;
        cout << answer(n, b);
    }
}