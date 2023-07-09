#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;

        vector<int> a(n);
        vector<int> b(n);

        for (int &x : a) {
            cin >> x;
        }
        for (int &x : b) {
            cin >> x;
        }

        vector<int> fa(2*n+1);
        vector<int> fb(2*n+1);
        
        int p = 0;
        for (int i = 1; i < n; i++) {
            if (a[i-1] != a[i]) {
                // cout << "a[n-1] : " << a[n-1] << " | i-p : " << i-p << '\n';
                fa[a[i-1]] = max(fa[a[i-1]], i-p);
                p = i;
            }
        }
        fa[a[n-1]] = max(fa[a[n-1]], n-p);

        // cout << "-----\n";
        p = 0;
        for (int i = 1; i < n; i++) {
            if (b[i-1] != b[i]) {
                // cout << "i-p : " << i-p << '\n';
                fb[b[i-1]] = max(fb[b[i-1]], i-p);
                p = i;
            }
        }
        fb[b[n-1]] = max(fb[b[n-1]], n-p);

        int ans = 0;
        for (int i = 0; i < 2*n+1; i++) {
            // cout << i << ' ' << fa[i] << ' ' << fb[i] << '\n';
            ans = max(ans, fa[i] + fb[i]);
        }

        cout << ans << '\n';
    }


    return 0;
}