#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        set<string> se;
        int n;
        string s;
        cin >> n >> s;

        // int ans = 0;

        // for (int i = 0; i < n-1; i++) {
        //     if (se.find(s.substr(i, 2)) == se.end()) {
        //         ans++;
        //         se.insert(s.substr(i, 2));
        //     }
        // }

        // cout << ans << '\n';

        for (int i = 0; i < n-1; i++) {
            se.insert(s.substr(i, 2));
        }
        cout << se.size() << '\n';
    }
    return 0;
}