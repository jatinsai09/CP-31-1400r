#include<bits/stdc++.h>

using namespace std;
#define int long long int
int32_t main() {
    int t;
    cin >> t;
    while (t--) {
        int n, i;
        string s;
        cin >> n >> s;
        int a = 0, c = 0;
        for (i = 0; i < n; i++) {
            if (s[i] == '*') {
                c++;
            }
        }
        
        c = (c + 1) >> 1;
        for (i = 0; i < n; i++) {
            if (s[i] == '*') {
                a++;
            }
            if (a == c) {
                break;
            }
        }
        
        int res = 0;
        a = 0;
        for (int j = i; j >= 0; j--) {
            if (s[j] == '*') {
                res += a;
            }
            else {
                a++;
            }
        }
        a = 0;
        for (int j = i; j < n; j++) {
            if (s[j] == '*') {
                res += a;
            }
            else {
                a++;
            }
        }
        
        cout << res << "\n";
    }
}