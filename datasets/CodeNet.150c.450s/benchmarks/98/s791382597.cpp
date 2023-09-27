#include<iostream>
#include<algorithm>

using namespace std;

int main() {
    while (true) {
        int n, m;
        int diff = 0;
        int s_taro[100], s_hanako[100];
        cin >> n >> m;
        if (n == 0 && m == 0) {
            break;
        }
        for (int i=0; i<n; i++) {
            cin >> s_taro[i];
            diff += s_taro[i];
        }
        for (int i=0; i<m; i++) {
            cin >> s_hanako[i];
            diff -= s_hanako[i];
        }
        if (diff%2 != 0) {
            cout << -1 << endl;
            continue;
        }
        sort(s_taro, s_taro+n);
        sort(s_hanako, s_hanako+m);

        bool is_found = false;
        for (int i=0; i<n; i++) {
            int begin = 0;
            int end = m-1;
            int center = (begin+end)/2;
            while (begin <= end) {
                int condition = (s_taro[i]-s_hanako[center])-diff/2;
                if (condition == 0) {
                    is_found = true;
                    break;
                }
                if (condition > 0) {
                    begin = center+1;
                    center = (begin+end)/2;
                }
                else {
                    end = center-1;
                    center = (begin+end)/2;
                }
            }
            if (is_found) {
                cout << s_taro[i] << ' ' << s_hanako[center] << endl;
                break;
            }
        }
        if (!is_found) {
            cout << -1 << endl;
        }
    }
    return 0;
}