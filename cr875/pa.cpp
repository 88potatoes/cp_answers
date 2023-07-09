#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int& x: a) {
            cin >> x;
        }

        for (int x : a) {
            cout << n+1-x << ' ';
        }
        cout << '\n';
    }
    return 0;
}