#include <bits/stdc++.h>
#define dump(a) cout << #a << " : " << a << '\n'
#define ll long long
using namespace std;

template <typename T>
void dumparr(vector<T> a) {
    for (T x : a) {
        cout << x << ' ';
    }
    cout << '\n';
}

long long ans[1000005];
long long a[2024][2024] = {};

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    long curr = 1;
    long s = 2;
    while (curr <= 1e6+6) {
        for (int i = 1; s - i > 0; i++) {
            a[i][s-i] = a[i-1][s-i] + a[i][s-i-1] - a[i-1][s-i-1] + curr * curr;
            ans[curr] = a[i][s-i];
            curr++;
        }
        s++;
    }
    
    // cout << ans[1000] << '\n';
    // cout << ans[5000] << '\n';
    // cout << ans[10000] << '\n';
    // cout << ans[50000] << '\n';
    // cout << ans[100000] << '\n';
    // cout << ans[500000] << '\n';
    // cout << ans[800000] << '\n';
    // cout << ans[900000] << '\n';
    // cout << ans[1000000] << '\n';


    int t;
    cin >> t;
    while (t--) {
        int k; cin >> k;
        cout << ans[k] << '\n';
    }
    return 0;
}