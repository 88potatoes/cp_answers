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

vector<int> m[201];

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--) {
        int g, h; cin >> g >> h;
        for (int i = 1; i <= g; i++) {
            m[i].clear();
        }

        for (int i = 0; i < h; i++) {
            int a, b; cin >> a >> b;
            
            m[a].push_back(b);
            m[b].push_back(a);
        }

        // for (int i = 1; i <= g; i++) {
        //     cout << i << " : ";
        //     dumparr(m[i]);
        // }

        map<int, int> ma;
        for (int i = 1; i <= g; i++) {
            if (m[i].size() == 1) continue;
            ma[m[i].size()]++;
        }
        
        int x, y;
        if (ma.size() == 1) {
            x = ma.begin()->first;
            y = x-1;
            cout << x << ' ' << y << '\n';
            continue;
        }

        for (auto i = ma.begin(); i != ma.end(); i++) {
            if (i->second == 1) {
                x = i->first;
            } else {
                y = i->first - 1;
            }
        }
        cout << x << ' ' << y << '\n';
    }
    return 0;
}