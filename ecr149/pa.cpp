#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int x, k;
        cin >> x >> k;

        if (x % k == 0) {
            cout << "2\n" << x-1 << ' ' << 1 << '\n';
        } else {
            cout << "1\n" << x << '\n';
        }
    }
}