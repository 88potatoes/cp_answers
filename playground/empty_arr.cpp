#include <iostream>

using namespace std;

int main() {
    int g[20][20] = {}; // makes it all 0;
    for (int i = 0; i < 20; i++) {
        for (int j = 0; j < 20; j++) {
            cout << g[i][j] << ' ';
        }
        cout << '\n';
    }
    return 0;
}