#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;
    // cout << t << '\n';
    while (t--) {
        int n;
        string s;
        cin >> n >> s;
        // cout << s << '\n';
        // char c;
        // bool need_new = true;

        // for (int i = 0; i < n; i++) {
        //     if (need_new) {
        //         c = s[i];
        //         need_new = false;
        //         continue;
        //     }
        //     if (c != s[i]) {
        //         continue;
        //     }
        //     cout << c;
        //     need_new = true;

        // }
        // cout << '\n';
        
        char c;
        for (int i = 0; i < n; i++) {
            c = s[i];
            while (s[++i] != c);
            cout << c;
        }
        cout << '\n';
    }
    return 0;
}