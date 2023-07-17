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
        string s; cin >> s;
        int n = s.size();
        vector<int> s_arr (n);
        for (int i = 0; i < n; i++) {
            s_arr[i] = s[i] - '0';
        }

        int m; cin >> m;
        string l; cin >> l;
        vector<int> l_arr (m);
        for (int i = 0; i < m; i++) {
            l_arr[i] = l[i] - '0';
        }

        string r; cin >> r;
        vector<int> r_arr (m);
        for (int i = 0; i < m; i++) {
            r_arr[i] = r[i] - '0';
        }

        int mx = 0;
        for (int i = 0; i < m; i++) {
            int li = l_arr[i];
            int ri = r_arr[i];
            // dump(li);
            // dump(ri);
            
            int new_mx = mx;
            for (int j = li; j < ri+1; j++) {
                int cmx = mx;
                while (cmx < n && s_arr[cmx] != j) {
                    cmx++;
                }
                new_mx = max(new_mx, cmx);
            }
            mx = new_mx+1;
        }
        cout << ((mx <= n) ? "NO\n" : "YES\n");
    }
    return 0;
}