#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        long long n;
        cin >> n;
        long long k; 
        cin >> k;
        
        vector<long long> a(n);
        for (long long &x : a) {
            cin >> x;
        }

        sort(a.begin(), a.end());

        
        for (int i = 1; i < a.size(); i++) {
            a[i] = a[i-1] + a[i];
        }

        int l = a.size(); 
        long long largest = a[l-k-1];
        for (int m = 1; m <= k; m++) {
            if (a[l-(k-m)-1] - a[2*m-1] > largest) {
                largest = a[l-(k-m)-1] - a[2*m-1];
            }
        }
        cout << largest << "\n";


        // for (long long x : a) {
        //     cout << x << ' ';
        // }
        // cout << '\n';

    }
    return 0;
}