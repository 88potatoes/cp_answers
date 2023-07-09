#include "bits/stdc++.h"
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

        if (n == 1) {
            cout << "1\n";
            continue;
        }

        if (n % 2) {
            cout << "-1\n";
        } else {
            for (int i = 0; i < n; i++) {
                if (i % 2) {
                    cout << i << ' ';
                } else {
                    cout << n-i << ' ';
                }
            }
            cout << '\n';
        }

    }
    return 0;
}