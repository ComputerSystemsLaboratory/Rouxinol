#include<iostream>
#include<vector>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<vector<int> > G(n, vector<int>(n, 0));

    for (int y = 0; y < n; y++) {
        int num, k;
        cin >> num >> k;
        for (int i = 0; i < k; i++) {
            int x;
            cin >> x;
            x--;
            G[x][y] = 1;
        }
    }

    for (int y = 0; y < n; y++) {
        cout << G[0][y];
        for (int x = 1; x < n; x++) {
            cout << " " << G[x][y];
        }
        cout << endl;
    }

    return 0;
}