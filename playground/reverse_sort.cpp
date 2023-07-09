#include <bits/stdc++.h>
#define dump(a) cout << #a << " : " << a << '\n'
using namespace std;

int main() {
    vector<int> a(100);
    for (int i = 0; i < 100; i++) {
        a[i] = i;
    }
    
    for (int i = 0; i < 100; i++) {
        cout << a[i] << ' ';
    }
    cout << '\n';
    sort(a.begin(), a.end(), greater<>());
    for (int i = 0; i < 100; i++) {
        cout << a[i] << ' ';
    }
    cout << '\n';

    return 0;
}