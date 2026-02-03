#include<bits/stdc++.h>

using namespace std;
#define int long long int
int32_t main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int a[n];
        int tl = INT_MAX, sl = INT_MAX, penalty = 0;
        for (int i = 0; i < n; i++) {
            cin >> a[i];
            if (sl > tl) {
                swap(sl, tl);
            }
            if (a[i] <= sl) {
                sl = a[i];
            }
            else if (a[i] <= tl) {
                tl = a[i];
            }
            else {
                penalty++;
                sl = a[i];
            }
        }
        cout << penalty << endl;
    }
}