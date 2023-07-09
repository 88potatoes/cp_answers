#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        // cout << "t : " << t << '\n';
        int n, k, q;
        cin >> n >> k >> q;
        
        vector<int> as;
        int p = 0;
        for (int i = 0; i < n; i++) {
            int c;
            cin >> c;
            // cout << c << ' ';
            if (c <= q) {
                p++;
                continue;
            }

            if (p == 0) {
                continue;
            }

            as.push_back(p);
            p = 0;
        }

        if (p != 0) {
            as.push_back(p);
        }

        int ans = 0;
        for (int i = 0; i < as.size(); i++) {
            int v = as[i]-k+1;
            // cout << "i : " << i << " , v : " << v << '\n';
            if (v <= 0) continue;
            ans += v * (v+1) / 2;
        }

        cout << ans << '\n';
        // cout << '\n';
        // if (p != 0) {
        //     as.push_back(p);
        // }

        // if (as.size() == 0) { cout << as.size() << '\n'; }
        // for (int i = 0; i < as.size(); i++) {
        //     cout << as[i] << ' ';
        // }
        // cout << "\n-----\n";


    }
    return 0;
}