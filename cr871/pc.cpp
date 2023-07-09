#include <bits/stdc++.h>
#define watch(a) cout << #a << " : " << a << '\n'

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;

        map<string, int> mp;
        mp["01"] = mp["00"] = mp["10"] = mp["11"] = 1e9;

        for (int i = 0; i < n; i++) {
            int m;
            string s;
            cin >> m >> s;
            mp[s] = min(mp[s], m);
        }
        watch(n);

        if ((mp["10"] == 1e9 || mp["01"] == 1e9) && mp["11"] == 1e9) {
            cout << -1 << '\n';
        } else {
            cout << min(mp["10"] + mp["01"], mp["11"]) << '\n';
        }
        
    }
    return 0;
}
