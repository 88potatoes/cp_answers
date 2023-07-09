#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        string s;
        cin >> n >> s;
        int height = 0;
        int biggest = 0;
        int lowest = 0;
        for (char c : s) {
            if (c == '<') {
                height++;
            } else if (c == '>') {
                height--;
            }
            if (height > biggest) {
                biggest = height;
            }
            if (height < lowest) {
                lowest = height;
            }
        }

        cout << abs(biggest) + abs(lowest) + 1 << '\n';
    }
    return 0;
}