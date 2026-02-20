#include<bits/stdc++.h>

using namespace std;
#define int long long int


int32_t main() {
    int t = 1;
    // cin >> t;
    while (t--) {
        vector < int > nums = {
            4,
            8,
            15,
            16,
            23,
            42
        };
        
        int ans[4];
        for (int i = 1; i <= 4; i++) {
            cout << "? " << i << " " << i + 1 << endl;
            cin >> ans[i - 1];
        }
        
        do {
            bool flag = true;
            for (int i = 0; i < 4; i++) {
                flag = flag & (ans[i] == nums[i] * nums[i + 1]);
            }
            if (flag) break;

        } while (next_permutation(nums.begin(), nums.end()));
        
        cout << "! ";
        for (int i = 0; i < 6; i++) {
            cout << nums[i] << " ";
        }
        return 0;
    }
}