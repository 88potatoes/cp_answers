#include <bits/stdc++.h>
#define dump(a) cout << #a << " : " << a << '\n'
using namespace std;

int main() {
    int t;
    cin >> t;
    // t= 1;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);

        for (int &x : a) {
            cin >> x;
        }

        if (n == 1) {
            cout << a[0] << '\n';
            continue;
        }

        // for (int i = 0; i < n; i++) {
        //     cout << a[i] << ' ';
        // }
        // cout << '\n';
        auto m = max_element(a.begin(), a.end());

        //biggest at end case
        if (m == a.end()-1) {
            if (a[0] > a[n-2]) {
                cout << a[n-1] << ' ';

                for (int i = 0; i < n-1; i++) {
                    cout << a[i] << ' ';
                }
                cout << '\n';
            } else {
                int p = n-2;
                while (a[p] > a[0]) {
                    p--;
                }
                cout << a[n-1] << ' ';
                for (int i = n-2; i > p; i--) {
                    cout << a[i] << ' ';
                }
                for (int i = 0; i <= p; i++) {
                    cout << a[i] << ' ';
                }
                cout << '\n';
            }
            continue;
        }

        if (m == a.begin()) {
            // do start stuff
            auto m2 = max_element(a.begin()+1, a.end());
            if (m2 == a.end()-1) {
                cout << a[n-1] << ' ';
                for (int i = 0; i < n-1; i++) {
                    cout << a[i] << ' ';
                }
                cout << '\n';
            } else {
                for (auto l = m2; l != a.end(); l++) {
                    cout << *l << ' ';
                }
                cout << *(m2-1) << ' ';
                for (auto l = a.begin(); l < m2-1; l++) {
                    cout << *l << ' ';
                }
                cout << '\n';
            }
            continue;
        }

        // biggest in the middle
        for (auto l = m; l != a.end(); l++) {
            cout << *l << ' ';
        }
        // cout << "| ";
        int mi = m - a.begin();
        // dump(mi);
        int p = mi-1;
        while (a[p] > a[0] || p == mi-1) p--;
        for (int i = mi-1; i > p; i--) {
            cout << a[i] << ' ';
        }
        // cout << "| ";
        for (int i = 0; i <= p; i++) {
            cout << a[i] << ' ';
        }
        cout << '\n';
    }
    return 0;
}