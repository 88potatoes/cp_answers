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
    // dump(t);
    while (t--) {
        int n; string s;
        cin >> n >> s;
        // dump(n);
        // dump(s);

        if (n % 2) {
            cout << "-1\n";
            continue;
        }

        vector<int> iletter_cnt(26);
        for (int i = 0; i < n; i++) {
            iletter_cnt[s[i] - 'a']++;
        }
        bool done = false;
        for (int i = 0; i < 26; i++) {
            if (iletter_cnt[i] > n/2) {
                cout << "-1\n";
                done = true;
                break;
            } 
        }
        if (done) { continue; }

        vector<int> letter_cnt(26);
        int cnt = 0;
        for (int i = 0; i < n/2; i++) {
            if (s[i] == s[n-1-i]) {
                cnt++;
                letter_cnt[s[i] - 'a']++;
            }
        }

        int mx_lettercnt = *max_element(letter_cnt.begin(), letter_cnt.end());
        cout << max(cnt/2 + cnt%2, mx_lettercnt) << '\n';
        // dump(t);

    }
    return 0;
}