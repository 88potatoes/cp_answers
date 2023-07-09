#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, m;
        cin >> n >> m;

        vector<vector<int>> a;
        for (int i = 0; i < n; i++) {
            vector<int> h(m);
            for (int j = 0; j < m; j++) {
                h[j] = i*m+j+1;
            }
            a.push_back(h);
        }

        vector<int> row_order(n);
        for (int i = 0; i < n; i++) {
            if (i%2==0) {
                row_order[i] = n/2 +i/2;
            } else {
                row_order[i] = i/2;
            }
        }

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cout << a[row_order[i]][j] << ' '; 
            }
            cout << '\n';
        }
    }

    return 0;
}