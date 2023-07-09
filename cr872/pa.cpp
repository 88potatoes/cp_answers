#include <bits/stdc++.h>
#define dump(a) cout << #a << " : " << a << '\n'
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--) {
        string s; cin >> s;
        bool done = false;
        for (int i = 1; i < s.size(); i++) {
            if (s[i-1] != s[i]) {
                cout << s.size()-1 << '\n';
                done = true;
                break;
            }
        }
        if (!done) {
            cout << -1 << '\n';
        }
    }
    return 0;
}