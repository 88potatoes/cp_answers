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
        int n; cin >> n;

        vector<int> dp (n+1);
        vector<int> buc (n+1, 0x3f3f3f3f);

        dp[0] = 0;
        for (int i = 1; i <= n; i++) {
            int x; cin >> x;

            dp[i] = min(dp[i-1] + 1, buc[x]);
            buc[x] = min(dp[i-1], buc[x]);
        }

        cout << n - dp[n] << '\n';
    }
    return 0;
}