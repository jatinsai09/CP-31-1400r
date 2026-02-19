#include<bits/stdc++.h>

using namespace std;
#define int long long int
int func(int n) {
    if (n == 1) return 1;
    return n + func(n / 2);
}
int32_t main() {
    int t = 1;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;

        int res = func(n);
        cout << res << endl;
    }
}