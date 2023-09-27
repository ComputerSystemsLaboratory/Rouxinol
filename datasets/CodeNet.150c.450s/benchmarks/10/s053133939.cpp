#include <iostream>
#define BUILDING 4
#define FLOOR 3
#define ROOM 10
using namespace std;
int main() {
    int n;
    cin >> n;
    int i;
    int b, f, r, v;
    int num[BUILDING][FLOOR][ROOM] = {0};
    for(i = 0; i < n; i++){
        cin >> b >> f >> r >> v;
        num[b-1][f-1][r-1] += v;
    }
    int j, k;
    for(i = 0;; i++){
        for(j = 0; j < FLOOR; j++){
            for(k = 0; k < ROOM; k++){
                cout << ' ' << num[i][j][k];
            }
            cout << endl;
        }
        if(i == BUILDING - 1) break;
        cout << "####################" << endl;
    }
    return 0;
}