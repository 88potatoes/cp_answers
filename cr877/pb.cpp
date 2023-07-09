#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int &x : a) {
            cin >> x;
        }
        int idx1, idx2, idxn;

        for (int i = 0; i < n; i++) {
            if (a[i] == 1) { idx1 = i; }
            if (a[i] == 2) { idx2 = i; }
            if (a[i] == n) { idxn = i; }
        }

        if (idx1 < idxn && idx2 < idxn) {
            cout << max(idx1, idx2)+1 << ' ' << idxn+1 << '\n';
        } else if (idx1 > idxn && idx2 > idxn) {
            cout << min(idx1, idx2)+1 << ' ' << idxn+1 << '\n';
        } else {
            cout << idx1+1 << ' ' << idx1+1 << '\n';
        }
    }

    return 0;
}