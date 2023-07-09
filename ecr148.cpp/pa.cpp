#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        s = s.substr(0, s.size()/2);
        cout << ((unique(s.begin(), s.end()) - s.begin() == 1) ? "NO" : "YES") << '\n';
    }
    return 0;
}