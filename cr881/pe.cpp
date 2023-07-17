#include <bits/stdc++.h>
#define dump(a) cout << #a << " : " << a << '\n'
#define ll long long
#define MOD 1e9+7
using namespace std;

template <typename T>
void dumparr(vector<T> a) {
    for (T x : a) {
        cout << x << ' ';
    }
    cout << '\n';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--) {
        int n, m; cin >> n >> m;

        map<pair<int, int>, int> ma;

        for (int i = 0; i < m; i++) {
            int x, y; cin >> x >> y;
            ma[{x, y}] = 0;
        }

        int q; cin >> q;
        vector<int> ones (q);

        for (int &x : ones) {
            cin >> x;
        }

        vector<int> ans (m);

        for (int i = 0; i < m; i++) {
            int preans = 0;
            int left = (ma.begin() + i).second.second;
            for (int j = 0; j < q; j++) {
                if ()
            }
        }
    }
    return 0;
}