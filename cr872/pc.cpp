#include <bits/stdc++.h>
#define dump(a) cout << #a << " : " << a << '\n'
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
        set<int> s;
        int pplL = 0, pplR = 0;
        for (int i = 0; i < n; i++) {
            int x; cin >> x;
            if (x > 0) {
                s.insert(x);
            } else if (x == -1) {
                pplL++;
            } else {
                pplR++;
            }
        }
        int vis = s.size();
        int ans = max(pplL, pplR) + vis;
        int nowL = 0, nowR = m-vis;
        for (int i = 1; i <= m; i++) {
            if (s.find(i) != s.end()) {
                ans = max(ans, min(pplL, nowL) + min(pplR, nowR) + vis);
            } else {
                nowL++; nowR--;
            }
        }

        cout << min(ans, m) << '\n';
    }
    return 0;
}