#include <bits/stdc++.h>
#define dump(a) cout << #a << " : " << a << '\n'
using namespace std;

int gcd(int a, int b);

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n; cin >> n;
        vector<int> a(n);
        for (int &x : a) {
            cin >> x;
        }
        int h = abs(a[0]-1);
        for (int i = 1; i < n; i++) {
            int jump = abs(a[i]-i-1);
            if (jump == 0) continue;
            h = __gcd(h, jump);
        }
        cout << h << '\n';
    }
    return 0;
}

// int gcd(int a, int b) {
//     if (!b) {return a;}  
//     return gcd(b, a%b);
// }

// int abs(int a) {
//     if (a > 0) { return a; }
//     return -a;
// }