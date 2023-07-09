#include <bits/stdc++.h>
#define dump(a) cout << #a << " : " << a << '\n'
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int ans = 0, p = 0;
        for (int i = 0; i < n; i++) {
            int x;
            cin >> x;
            // dump(x);
            if (x == 0) {
                p++;
                continue;
            }
            ans = max(ans, p);
            p = 0;
        }
        ans = max(ans, p);
        cout << ans << '\n';
    }
    return 0;
}