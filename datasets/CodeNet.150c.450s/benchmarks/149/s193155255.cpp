#include<iostream>
#include<vector>
using namespace std;

int main(){
    int n, q;
    cin >> n >> q;
    vector<int> color(n);
    for (int i = 0; i < n; i++) {
        color[i] = i;
    }
    for (int i = 0; i < q; i++) {
        int com, x, y;
        cin >> com >> x >> y;
        if (com == 0) {
            int col_y = color[y];
            for (int i = 0; i < n; i++) {
                if (color[i] == col_y) color[i] = color[x];
            }
        } else {
            cout << (color[x] == color[y]) << endl;
        }
    }
    return 0;
}

