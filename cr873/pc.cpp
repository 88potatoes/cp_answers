#include <bits/stdc++.h>
#define dump(a) cout << #a << " : " << a << '\n'
#define ll long long

using namespace std;


const int MOD = 1e9+7;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n; cin >> n;
        vector<int> a(n);
        for (int &x : a) {
            cin >> x;
        }
        vector<int> b(n);
        for (int &x : b) {
            cin >> x;
        }

        sort(a.begin(), a.end());
        sort(b.begin(), b.end());

        ll res = 1;
        for (int i = n-1; i >= 0; i--) {
            int k = max(n - (upper_bound(a.begin(), a.end(), b[i]) - a.begin()) - (n-i-1), 0);
            res = (res * k) % MOD;
            // cout << res << ' ';
        }
        // cout << '\n';
        cout << res << '\n';
    }
    return 0;
}