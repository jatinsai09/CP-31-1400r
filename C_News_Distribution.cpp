#include <bits/stdc++.h>

using namespace std;
#define ll long long int
#define MAX LLONG_MAX
#define MIN LLONG_MIN
const int MOD = 1e9 + 7;

ll add(ll a, ll b, ll m = MOD) {
    return ((a % m) + (b % m) + m) % m;
};
ll sub(ll a, ll b, ll m = MOD) {
    return ((a % m) - (b % m) + m) % m;
};
ll mul(ll a, ll b, ll m = MOD) {
    return ((a % m) * (b % m)) % m;
};
ll modExp(ll a, ll e, ll m = MOD) {
    a % m;
    ll r = 1;
    while (e) {
        if (e & 1) {
            r = mul(r, a, m);
        }
        a = mul(a, a, m);
        e >>= 1;
    }

    return r;
}
ll inv(ll a, ll m = MOD) {
    return modExp(a, m - 2, m);
};

class DSU {
    public: vector < int > parent,
    size;
    DSU(int n) {
        parent.resize(n);
        size.resize(n);

        for (int i = 0; i < n; i++) {
            parent[i] = i;
            size[i] = 1;
        }
    }

    int find(int x) {
        if (parent[x] == x) {
            return x;
        }
        return parent[x] = find(parent[x]);
    }

    bool unite(int x, int y) {
        int px = find(x), py = find(y);

        if (px == py) {
            return false;
        }

        if (size[py] < size[px]) {
            parent[py] = px;
            size[px] += size[py];
        }
        else {
            parent[px] = py;
            size[py] += size[px];
        }
        return true;
    }
};

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    ll tc = 1;
    //cin >> tc;
    while (tc--) {
        ll n, k;
        cin >> n >> k;
        DSU dsu(n + 1);
        int sz;
        for (int i = 0; i < k; i++) {
            cin >> sz;
            vector < int > g(sz);
            for (auto & i: g) {
                cin >> i;
            }

            for (int i = 1; i < sz; i++) {
                dsu.unite(g[0], g[i]);
            }
        }


        for (int i = 1; i <= n; i++) {
            int par = dsu.find(i);

            cout << dsu.size[par] << " ";
        }

        cout << "\n";
    }
    // your code goes here

}