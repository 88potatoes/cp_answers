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

const int SIDE = 1000;
int grid[SIDE][SIDE];
bool vis[SIDE][SIDE];

int n, m;
int bfs(int x, int y);

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--) {
        cin >> n >> m;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cin >> grid[i][j];
                vis[i][j] = false;
            }
        }
        
        int ans = 0;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (!vis[i][j]) {
                    // cout << "he\n";
                    ans = max(ans, bfs(i, j));
                }
            }
        }
        cout << ans << '\n';
    }
    return 0;
}

int bfs(int x, int y) {
    queue<pair<int,int>> q;
    q.push({x, y});
    vis[x][y] = true;

    int score = 0;

    while (!q.empty()) {
        // cout << "haha\n";
        auto cu = q.front();
        q.pop();

        if (grid[cu.first][cu.second] == 0) {
            continue;
        }

        score += grid[cu.first][cu.second];

        // add right
        if (cu.second + 1 < m && !vis[cu.first][cu.second+1]) {
            q.push({cu.first, cu.second+1});
            vis[cu.first][cu.second+1] = true;
        }

        // add left
        if (cu.second - 1 >= 0 && !vis[cu.first][cu.second-1]) {
            q.push({cu.first, cu.second-1});
            vis[cu.first][cu.second-1] = true;
        }

        // add top
        if (cu.first - 1 >= 0 && !vis[cu.first-1][cu.second]) {
            q.push({cu.first-1, cu.second});
            vis[cu.first-1][cu.second] = true;
        }

        // add bottom
        if (cu.first + 1 < n && !vis[cu.first+1][cu.second]) {
            q.push({cu.first+1, cu.second});
            vis[cu.first+1][cu.second] = true;
        }
    }

    return score;
}