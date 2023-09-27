#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    int point_tar = 0, point_han = 0;
    
    vector<string> taro(n, ""), hanako(n, "");
    for (int i = 0; i < n; i++) {
        cin >> taro[i] >> hanako [i];
        if (taro[i] == hanako[i]) {
            point_tar++; point_han++;
        } else if (taro[i] > hanako[i]) {
            point_tar += 3;
        } else {
            point_han += 3;
        }
    }
    
    cout << point_tar << " " << point_han << endl;
    
    return 0;
}
