#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        string s;
        cin >> n >> s;

        vector<int> bal(n+1);
        for (int i = 0; i < n; i++) {
            if (s[i] == '(') {
                bal[i+1] = bal[i]+1;
            } else {
                bal[i+1] = bal[i]-1;
            }
        }
        // for (int i = 0; i < n+1; i++) {
        //     cout << bal[i] << ' ';
        // }
        // cout << '\n';

        if (bal[n] != 0) {
            cout << -1 << '\n';
            continue;
        }

        if (*min_element(bal.begin(), bal.end()) == 0 || *max_element(bal.begin(), bal.end()) == 0) {
            cout << 1 << '\n';
            for (int i = 0; i < n; i++) {
                cout << 1 << ' ';
            }
            cout << '\n';
            continue;
        }

        cout << 2 << '\n';
        // int i = 0;
        // while (i < n) {
        //     int c = (s[i] == '(') ? 1 : 2;
        //     do {
        //         i++;
        //         cout << c << ' ';
        //     } while (bal[i] != 0);
        // }
        // cout << '\n';
        for (int i = 0; i < n/2; i++) {
            if (s[i] == '(') {
                cout << 1 << ' ';
            } else {
                cout << 2 << ' ';
            }
        }
        for (int i = n/2; i < n; i++) {
            if (s[i] == ')') {
                cout << 1 << ' ';
            } else {
                cout << 2 << ' ';
            }
        }
        cout << '\n';
    }
    return 0;
}