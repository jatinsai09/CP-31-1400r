#include<bits/stdc++.h>

using namespace std;
#define int long long int
int32_t main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        string s;
        cin >> n >> s;
        if (n & 1) {
            cout << "-1\n";
            continue;
        }

        int c1 = 0, c2 = 0;
        vector < int > v;
        stack < char > st1, st2;
        for (int i = 0; i < n; i++) {
            if (s[i] == ')') {
                if (!st1.empty()) {
                    st1.pop();
                    v.push_back(1);
                    c1++;
                }
                else {
                    st2.push(')');
                    v.push_back(2);
                    c2++;
                }
            }
            else {
                if (!st2.empty()) {
                    st2.pop();
                    v.push_back(2);
                    c2++;
                }
                else {
                    st1.push('(');
                    v.push_back(1);
                    c1++;
                }
            }
        }

        if (st1.empty() && st2.empty()) {
            cout << (c1 && c2 ? "2\n" : "1\n");

            for (int i = 0; i < n; i++) {
                cout << (c1 && c1 ? v[i] : 1) << " ";
            }
            cout << "\n";
        }
        else {
            cout << -1 << "\n";
        }

    }
}