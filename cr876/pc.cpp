#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);

        for (int& x : a) {
            cin >> x;
        }

        if (a[n-1] == 1) { 
            cout << "NO\n"; 
            continue; 
        } else {
            cout << "YES\n";
        }

        // for (int i = 0; i < n; i++){ 
        //     cout << a[i] << ' ';
        // }
        // cout << '\n';

        vector<int> sections;
        for (int i = 0; i < n; i++) {
            if (a[i] == 0) {
                sections.push_back(i);
            }
        }


        int ns = sections.size();
        // for (int i = 0; i < ns; i++) {
        //     cout << sections[i] << ' ';
        // }

        for (int i = ns-1; i > 0; i--) {
            int k = sections[i] - sections[i-1] - 1;
            for (int j = 0; j < k; j++) {
                cout << 0 << ' ';
            }
            cout << k << ' ';
        }
        for (int i = 0; i < sections[0]; i++) {
            cout << 0 << ' ';
        }
        cout << sections[0] << '\n';
    }

    return 0;
}