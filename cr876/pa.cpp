#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, k;
        cin >> n >> k;
        int r = (n/k) + (n%k!=0) + (n%k!=1 && k!=1);
        cout << r << '\n';
    }
    return 0;
}