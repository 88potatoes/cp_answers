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
    // t= 1;
    while (t--) {
        int n, m; cin >> n >> m;
        vector<pair<int,int>> segs (m);
        
        for (int i = 0; i < m; i++) {
            int l, r; cin >> l >> r;
            l--;
            segs[i] = {l, r};
        }

        int q; cin >> q;
        vector<int> ones (q);
        for (int &x : ones) {
            cin >> x;
            x--;
        }

        int l = 0, r = q+1;
        while (r-l > 1) {
            int M = (l+r)/2;

            vector<int> cur (n, 0);
            for (int i = 0; i < M; i++) {
                cur[ones[i]] = 1;
            }

            vector<int> ps (n+1, 0);
            for (int i = 0; i < n; i++) {
                ps[i+1] = ps[i] + cur[i];
            }

            // dumparr(cur);
            // dumparr(ps);
            // cout << "---\n";

            bool found = false;
            for (int i = 0; i < m; i++) {
                // if (l == 0 && i == 2) { 
                //     dump(segs[i].second);
                //     dump(segs[i].first);
                // }

                if (ps[segs[i].second] - ps[segs[i].first] > (segs[i].second - segs[i].first)/2) {
                    found = true;
                    // cout << "YAHOO\n";
                    break;
                }
            }

            if (!found) {
                l = M;
            } else {
                r = M;
                // cout << "hehe\n";
            }

            // dump(l);
            // dump(r);
        }

        if (r == q+1) {
            r = -1;
        }
        cout << r << '\n';
    }
    return 0;
}