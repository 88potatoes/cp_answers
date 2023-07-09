#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        
        vector<pair<int,int>> arr (n);
        for (int i = 0; i < n; i++) {
            int a, b;
            cin >> a >> b;
            arr[i] = {a, b};
        }

        sort(arr.rbegin(), arr.rend());

        // int biggest_a = arr[n-1].first;
        // int c_index = -1;
        // int points = 0;
        // int pre_index = -1;

        // for (auto p : arr) {
        //     cout << p.first << ' ' << p.second << '\n';
        // }

        // cout << '\n';

        int points = 0;

        for (int i = 0; i < n;) {
            int c_a = arr[i].first;
            int counter = c_a;
            while (arr[i].first == c_a) {
                if (counter) {

                    counter--;
                    points += arr[i].second;
                }
                i++;
            }
        }

        cout << points << '\n';



        // for (int i = 1; i <= biggest_a; i++) {
        //     while (c_index+1 < n && arr[c_index+1].first == i) { c_index++; }
        //     // cout << "c_index " << c_index << '\n';
        //     if (c_index == -1 || arr[c_index].first != i) { continue; }
        //     for (int j = 0; j < i && c_index-j > pre_index; j++) {
        //         points += arr[c_index-j].second;
        //     } 
        //     // cout << "points " << points << '\n';
        //     pre_index = c_index; 
        // }
        // cout << points << '\n';







        // int on = 0;
        // int current_a = 1;
        // int a_index = 0, pre_index = -1;
        // int points = 0;
        // int bstop = arr[n-1].first; 
        // int held = 0;

        // while (current_a <= bstop) {
        //     while (arr[a_index].first == current_a && a_index < n) {
        //         a_index++;
        //     }
        //     a_index--;
        //     // cout << "a_index " << a_index << '\n';

        //     int back_counter = 0;
        //     while (on < current_a +held && a_index-back_counter > pre_index) {
        //         on++;
        //         points += arr[a_index - back_counter].second;
        //         back_counter++;
        //     }

        //     // cout << "points " << points <<'\n';

        //     if (on == current_a) {
        //         on -= back_counter + held;
        //         held = 0;
        //     } else {
        //         held = back_counter;
        //     }

        //     pre_index = a_index;
        //     a_index++;
        //     current_a++;
        // }
        // cout << points << "\n";
    }

    return 0;
}