#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<pair<int, int>> a(n-1);
        for (int i = 0; i < n-1; i++) {
            int c, b;
            cin >> c >> b;
            a[i] = {c, b};
        }

        vector<bool> track_nodes(n+1);
        vector<bool> track_edges(n-1);
        track_nodes[1] = true;

        int done = 0;
        int cycles = 0;
        while (done != n-1) {
            for (int i = 0; i < n-1; i++) {
                if (track_edges[i]) {continue;}

                if (track_nodes[a[i].first]) {
                    track_nodes[a[i].second] = true;
                    track_edges[i] = true;
                    done++;
                } else if (track_nodes[a[i].second]) {
                    track_nodes[a[i].first] = true;
                    track_edges[i] = true;
                    done++;
                }
            }
            cycles++;
        }

        cout << cycles << '\n';
    }
    return 0;
}