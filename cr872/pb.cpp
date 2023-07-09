#include <bits/stdc++.h>
#define put(a) cout << #a << " : "
#define dump(a) cout << #a << " : " << a << '\n'
using namespace std;

template <typename T>
void dumparr(vector<T> a) {
    put(a);
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
        int s = n*m;
        vector<int> a(s);
        for (int &x : a) {
            cin >> x;
        }

        sort(a.begin(), a.end());

        // dumparr<int>(a);

        int q = (s-min(n,m)) * (a[s-1] - a[0]) + (min(n, m)-1)*(a[s-1] - a[1]);
        int w = (s-min(n, m)) * (a[s-1] - a[0]) + (min(n, m)-1) * (a[s-2] - a[0]);
        // dump(q);
        // dump(w);
        cout << max(q, w) << '\n';
    }
    return 0;
}