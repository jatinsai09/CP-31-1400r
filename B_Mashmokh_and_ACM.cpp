#include<bits/stdc++.h>

using namespace std;
#define int long long int
vector < vector < int >> dp(2005, vector < int > (2005, -1));
#define MOD 1000000007

int answer(int n, int k, int i) {
    if (k == 0) {
        return 1LL;
    }
    
    if (dp[i][k] != -1) return dp[i][k];
    
    int res = 0;
    for (int j = i; j <= n; j += i) {
        res += (answer(n, k - 1, j) % MOD);
        res = res % MOD;
    }
    dp[i][k] = res;
    
    return dp[i][k];
}




int32_t main() {
    int t = 1;
    //cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        cout << answer(n, k, 1);
    }
}