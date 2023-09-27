#include <bits/stdc++.h>

using namespace std;

int main()
{

    int r, c;
    cin >> r >> c;

    vector<vector<int>> T(r+1, vector<int>(c+1, 0));

    for(int i = 0; i < r; i++){
        for(int j = 0; j < c; j++){
            cin >> T.at(i).at(j);
        }
    }

    int s = 0;
    for(int i = 0; i < r; i++){
        for(int j = 0; j < c; j++){
            int v = T.at(i).at(j);
            T.at(i).at(c) += v;
            T.at(r).at(j) += v;
            s += v;
            cout << v << " ";
        }
        cout << T.at(i).at(c) << endl;
    }
    for(int i = 0; i < c; i++){
        cout << T.at(r).at(i) << " ";
    }
    cout << s << endl;

}
