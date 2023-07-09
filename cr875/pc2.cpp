#include <bits/stdc++.h>

using namespace std;
const int NMAX = 2e5+5;
vector<int> dp(NMAX);
vector<int> order(NMAX);
vector<pair<int,int>> edges[NMAX];

void dfs(int n);

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;

        for (int i = 1; i <= n; i++) {
            dp[i] = 0;
            order[i] = 0;
            edges[i].clear();
        }

        for (int i = 1; i < n; i++) {
            int a, b;
            cin >> a >> b;
            edges[a].push_back({b, i});
            edges[b].push_back({a, i});
        }

        dp[1] = 1;
        dfs(1);

        int ans = 0;
        for (int i = 1; i <= n; i++) {
            ans = max(ans, dp[i]);
        }

        cout << ans << '\n';
    }

    return 0;
}

void dfs(int n) {
    for (auto it : edges[n]) {
        if (dp[it.first] != 0) { continue; }

        dp[it.first] = dp[n] + (order[n] > it.second);
        order[it.first] = it.second;
        dfs(it.first);
    }
}