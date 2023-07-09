#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);

        for (int &x: a) {
            cin >> x;
        }
        // for (int x: a) {
        //     cout << x << ' ';
        // }
        // cout << '\n';

        n = unique(a.begin(), a.end()) - a.begin();
        
        // int flips = 1;
        // bool bonus = false;
        // for (int i = 0; i < n-2; i++) {
        //     if (abs(-a[i]+a[i+2]) < abs(a[i+1]-a[i]) + abs(a[i+2] - a[i+1])) {
        //         flips++;
        //         bonus = true;
        //     }
        // }
        // if (flips == 1) {
        //     if (a[0] - a[a.size()-1] != 0) {
        //         flips++;
        //     }
        // }
        // if (bonus) { flips++; }
        int ans = n;
        for  (int i = 0; i < n-2; i++) {
            ans -= (a[i] < a[i+1] && a[i+1] < a[i+2]);
            ans -= (a[i] > a[i+1] && a[i+1] > a[i+2]);
        }

        cout << ans << '\n';
    }
    return 0;
}