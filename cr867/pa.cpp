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
        int n, q; cin >> n >> q;
        vector<int> a(n), b(n);
        for (int &x : a) cin >> x;
        for (int &x : b) cin >> x;

        int ans = 0, ansi = -2;
        for (int i = 0; i < n; i++) {
            if (q-i >= a[i]) {
                if (b[i] > ans) {
                    ans = b[i];
                    ansi = i;
                }
            }
        }
        cout << ansi+1 << '\n';
    }
    return 0;
}