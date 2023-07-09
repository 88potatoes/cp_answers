#include <bits/stdc++.h>

using namespace std;

int main() {
    int t = 1;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        vector<int> b(n);

        for (int& x: a) {
            cin >> x;
        }
        for (int& x: b) {
            cin >> x;
        }
        map<int, int> ma;
        map<int, int> mb;
        // ma[1] = 5;
        // cout << ma[1] << '\n';
        // return 0;
        int biggest = 0;

        for (int i = 0; i < n ;i++) {
            int c = a[i];
            // cout << "c " << c << '\n';

            if (c > biggest) {biggest = c;}

            int m = 0;
            while (a[i+m] == c && i+m < n) {m++;}

            // cout << "ma[c] : " << ma[c] << '\n';

            // cout << "m : " << m << '\n';
            // cout << (m > ma[c]) << '\n';
            if (m > ma[c]) { 
                
                // cout << "m : " << m << '\n';
                ma[c] = m; 

                // cout << "ma[c]" << ma[c] << '\n';
            }
        }
        // cout << "ma : " << ma[2] << '\n';
        for (int i = 0; i < n ;i++) {
            int c = b[i];
            if (c > biggest) {biggest = c;}
            int m = 0;
            while (b[i+m] == c && i+m < n) {m++;}
            if (m > mb[c]) { mb[c] = m;}
        }
        // cout << "biggest " << biggest << '\n';
        int biggest_score = 0;
        for (int i = 0; i <= biggest; i++ ){
            // cout << "ms  "<< i << ": " << ma[i] << ' ' <<  mb[i] << '\n';
            if (ma[i] + mb[i] > biggest_score) {
                biggest_score = ma[i] + mb[i];
            }
        }
        cout << biggest_score << '\n';
    }
}