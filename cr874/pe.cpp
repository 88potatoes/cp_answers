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
    // t=3;
    while (t--) {
        int n; cin >> n;
        vector<int> a(n+1);
        for (int i = 1; i <= n; ++i) {
            cin >> a[i];
        }

        vector<set<int>> el (n+1);
        for (int i = 1; i <= n; ++i) {
            el[i].insert(a[i]);
            el[a[i]].insert(i);
        }

        // dumparr(a);
        

        int bamboos = 0, cycles = 0;

        queue<int> q;
        vector<bool> vis(n+1, false);
        for (int i = 1; i <= n; i++) {
            if (vis[i]) continue;

            set<int> component;

            // vis[i] = true;
            q.push(i);
            while (!q.empty()) {
                int u = q.front();
                q.pop();

                if (vis[u]) continue;
                component.insert(u);
                vis[u] = true;
                for (int x : el[u]) {
                    if (!vis[x]) {
                        q.push(x);
                    }
                }
            }


            bool isCycle = true;
            for (int x : component) {
                if (el[x].size() == 1) {
                    bamboos++;
                    isCycle = false;
                    break;
                }
            }
            if (isCycle) {
                cycles++;
            }

            // dump(i);
            // dump(component.size());
        }

        cout << cycles + (bamboos != 0) << ' ' << cycles + bamboos << '\n';
    }
    return 0;
}