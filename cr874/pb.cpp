#include <bits/stdc++.h>
#define dump(a) cout << #a << " : " << a << '\n'
using namespace std;

int main() {
    int t;
    cin >> t;
    // t = 1;
    while (t--) {
        int n, k;
        cin >> n >> k;
        
        vector<pair<int,int>> vs;
        vector<int> a;

        for(int i = 0; i < n; i++) {
            int x; cin >> x;
            vs.push_back({x, i});
        }
        for (int i = 0; i < n; i++) {
            int x; cin >> x;
            a.push_back(x);
        }

        sort(vs.begin(), vs.end());
        sort(a.begin(), a.end());

        for (int i = 0; i < n; i++) {
            vs[i].first = a[i];
        }
        // for (int i = 0; i < n; i++) {
        //     cout << vs[i].first << ' ';
        // }
        // cout << '\n';

        sort(vs.begin(), vs.end(), [](auto &left, auto& right) {
            return left.second < right.second;
        });
        for (int i = 0; i < n; i++) {
            cout << vs[i].first << ' ';
        }
        cout << '\n';
    }
    return 0;
}