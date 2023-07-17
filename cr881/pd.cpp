#include <bits/stdc++.h>
#define dump(a) cout << #a << " : " << a << '\n'
#define ll long long
#define MOD 1e9+7
#define SIZE 200005
using namespace std;


template <typename T>
void dumparr(vector<T> a) {
    for (T x : a) {
        cout << x << ' ';
    }
    cout << '\n';
}


vector<ll> score;
vector<set<int>> neighbours;
vector<bool> vis;

int dfs_ac(int x);

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t; cin >> t;
    while (t--) {
        int n; cin >> n;

        score.assign(n+1, 0);
        vis.assign(n+1, false);
        neighbours.assign(n+1, {});

        for (int i = 0; i < n-1; i++) {
            int x, y; cin >> x >> y;
            neighbours[x].insert(y);
            neighbours[y].insert(x);
        }

        dfs_ac(1);
        // dumparr(score);

        int k; cin >> k;
        for (int i = 0; i < k; i++) {
            int x, y; cin >> x >> y;
            cout << score[x]*score[y] << '\n';
        }

    }
    return 0;
}

int dfs_ac(int x) {
    vis[x] = true;

    int s = 0;
    for (int u : neighbours[x]) {
        if (vis[u]) continue;

        s += dfs_ac(u);
    }
    
    s = (s == 0) ? 1 : s;
    score[x] = s;

    return s;
}