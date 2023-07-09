#include <bits/stdc++.h>
#define dump(a) cout << #a << " : " << a << '\n'
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

        int x = *min_element(a.begin(), a.end());
        if (x % 2 == 1) { 
            cout << "YES\n";
            continue;
        }

        bool fail = false;
        for (int i = 0; i < n; i++) {
            if (a[i] % 2 == 1) {
                fail = true;
                break;
            }
        }

        if (fail) {
            cout << "NO\n";
            continue;
        }
        cout << "YES\n";
    }
    return 0;
}