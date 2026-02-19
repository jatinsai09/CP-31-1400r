#include<bits/stdc++.h>

using namespace std;
#define int long long int

int32_t main() {
    int t = 1;
    //cin>>t;
    while (t--) {
        int n;
        cin >> n;
        vector < int > v(n);
        for (auto & i: v) cin >> i;
        
        int pos = 0, neg = 0;
        int pos_cnt = 0, neg_cnt = 0;
        for (auto & i: v) {
            if (i > 0) {
                pos = 1 + pos;
                neg = neg;
            } else {
                int prev_pos = pos;

                pos = neg;
                neg = 1 + prev_pos;
            }

            pos_cnt += pos;
            neg_cnt += neg;
        }

        cout << neg_cnt << " " << pos_cnt << "\n";
    }
}