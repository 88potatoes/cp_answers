#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;
    string word = "codeforces";

    while (t--) {
        string s;
        cin >> s;

        int ans = 0;
        for (int i = 0; i < 10; i++) {
            if (s[i] != word[i]) ans++;
        }
        cout << ans << '\n';
    }
    return 0;
}