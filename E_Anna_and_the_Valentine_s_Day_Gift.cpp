#include<bits/stdc++.h>

using namespace std;
#define int long long int

int countd(int n) {
    int c = 0;
    while (n) {
        c++;
        n /= 10;
    }
    return c;
}
int countz(int n) {
    int c = 0;
    while (n) {
        if (n % 10) break;
        c++;
        n /= 10;
    }
    return c;
}
int32_t main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;

        int a[n], z[n], sum = 0;
        for (int i = 0; i < n; i++) {
            cin >> a[i];
            sum += countd(a[i]);
            z[i] = countz(a[i]);
        }

        sort(z, z + n, greater < int > ());
        for (int i = 0; i < n; i += 2) {
            sum -= z[i];
        }

        if (sum >= m + 1) {
            cout << "Sasha" << endl;
        }
        else {
            cout << "Anna" << endl;
        }
    }
}