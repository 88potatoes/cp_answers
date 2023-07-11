#include <bits/stdc++.h>
#define dump(a) cout << #a << " : " << a << '\n'
#define ll long long
using namespace std;

template <typename T>
void dumparr(vector<T> a) {
    for (T x : a) {
        cout << x << ' ';
    }
    cout << '\n';
}

int main() {
    // ios::sync_with_stdio(false);
    // cin.tie(0);
    int t;
    cin >> t;
    while (t--) {

        int n; cin >> n;
        vector<bool> dp (5005, false);
        vector<int> a (n);

        for (int &x : a) {
            cin >> x;
        }
        
        sort(a.begin(), a.end());
        if (a[0] == 1) {
            dp[1] = true;
        } else {
            cout << "NO\n";
            continue;
        }
        
        bool can = true;
        for (int i = 1; i < n; i++) {
            if (!dp[a[i]]) {
                
                cout << "NO\n";
                can = false;
                break;
            }

            for (int j = 5000; j > 0; --j) {
                dp[j] = dp[j] || ((j-a[i] > 0) ? dp[j-a[i]] : dp[j]);
            }
        }

        if (can) {
            cout << "YES\n";
        }

    }
    return 0;
}