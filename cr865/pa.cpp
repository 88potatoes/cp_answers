#include <bits/stdc++.h>
#define dump(a) cout << #a << " : " << a << '\n'
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--) {
        int a, b;
        cin >> a >> b;
        if (b==1 || a == 1) {
            cout << 1 << '\n' << a << ' ' << b << '\n';
        } else {
            cout << 2 << '\n' << 1 << ' ' << b-1 << '\n' << a << ' ' << b << '\n';

        }
    }
    return 0;
}