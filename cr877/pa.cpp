#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);

        for (int &x: a) {
            cin >> x;
        }

        sort(a.begin(), a.end());
        if (a[0] < 0) {
            cout << a[0] << '\n';
        } else {
            cout << a[a.size()-1] << '\n';
        }
    }
    return 0;
}