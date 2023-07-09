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

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--) {
        int n; cin >> n;
        vector<ll> a(n);
        for (auto &x : a) cin >> x;

        sort(a.begin(), a.end());
        cout << max(a[0]*a[1], a[n-1]*a[n-2]) << '\n';
    }
    return 0;
}