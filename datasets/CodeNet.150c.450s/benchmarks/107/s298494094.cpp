#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> dist;
int levenshtein_distance(string a, string b) {
    // init : 長さ0の文字列と比較した場合の距離は長さと一致する
    for (auto i = 0; i <= (int)a.size(); i++) dist[i][0] = i;
    for (auto i = 0; i <= (int)b.size(); i++) dist[0][i] = i;

    // dp
    for (auto i = 1; i <= (int)a.size(); i++) {
        for (auto j = 1; j <= (int)b.size(); j++) {
            dist[i][j] = dist[i][j - 1] + 1; // insert
            dist[i][j] = min(dist[i][j], dist[i - 1][j] + 1); // delete
            dist[i][j] = min(dist[i][j], dist[i - 1][j - 1] + (a[i - 1] != b[j - 1])); // replace
        }
    }

    // print
//    for (auto i = 0; i <= (int)a.size(); i++) {
//        if(i == 0) {
//            cout << "  ";
//            for (auto j = 0; j <= (int)b.size(); j++) cout << b[j - 1] << " ";
//            cout << endl;
//        }
//        for (auto j = 0; j <= (int)b.size(); j++) {
//            if(j == 0) cout << a[i - 1] << " ";
//            cout << dist[i][j] << " ";
//        }
//        cout << endl;
//    }

    return dist[a.size()][b.size()];
}

int main(){
    string s1, s2;
    cin >> s1 >> s2;

    dist.assign(s1.size() + 1, vector<int>(s2.size() + 1, 0));
    cout << levenshtein_distance(s1, s2) << endl;

    return 0;
}
