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

bool rec(int n, int target);
set<int> s;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--) {
        int n, m; cin >> n >> m;
        // dump(t);
        cout << (rec(n, m) ? "YES" : "NO") << '\n';
        s.clear();
    }
    return 0;
}

bool rec(int n, int target) {
    if (s.find(n) != s.end()) { return false; }
    s.insert(n);
    if (n == target) {
        return true;
    }
    if (n < target) {
        return false;
    }

    if (n % 3) {
        return false;
    }

    return rec(n*2/3, target) || rec(n/3, target);
}