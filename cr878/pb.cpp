#include <bits/stdc++.h>

using namespace std;

int nchoosek(int n, int k);

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        cout << "n : " << n;
        int w = n;
        int power = 0;
        while (n > 1) {
            n /= 2;
            power++;
        }
        cout << "power : " << power << '\n';
        int ans = 0;
        for (int i = 0; i < power; i++) {
            ans += nchoosek(k, i);
        }
        cout << "ans : " << ans << '\n';
        int l = (1<<power);
        ans += w-l+1;
        cout << ans << '\n';
    }

    return 0;
}

int nchoosek(int n, int k) {
    if (k==0) return 1;
    return (n*nchoosek(n-1, k-1)) / k;
}