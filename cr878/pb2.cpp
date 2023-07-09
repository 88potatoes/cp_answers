#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, k;
        cin >> n >> k;
        k = min(k, 30);
        cout << min((1<<k), n+1) << '\n';
    }
    
    return 0;
}