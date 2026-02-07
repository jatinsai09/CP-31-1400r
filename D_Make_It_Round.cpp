#include<bits/stdc++.h>

using namespace std;
#define int long long int
int32_t main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m, x, y;
        cin >> n >> m;
        
        int temp = n, c2 = 0, c5 = 0, k = 1;
        while (temp % 2 == 0) {
            temp /= 2;
            c2++;
        }
        while (temp % 5 == 0) {
            temp /= 5;
            c5++;
        }
        
        
        for (int i = 0; i < abs(c2 - c5); i++) {
            int mul = (c2 < c5 ? 2 : 5);
            if (k * mul > m) {
                break;
            }
            k *= mul;
        }
        while (k * 10 <= m) {
            k *= 10;
        }

        cout << (m / k) * k * n << "\n";
    }
}