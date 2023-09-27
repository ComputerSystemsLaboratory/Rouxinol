#include <iostream>
using namespace std;
int main(void){
    int n, b, f, r, v;
    int data[4][3][10];
    for (int a =0; a < 4; a++)
        for (int b=0; b < 3; b++)
            for (int c=0; c < 10; c++)
                data[a][b][c] = 0;
    cin >> n;
    for (int i=0; i<n; i++) {
        cin >> b >> f >> r >> v;
        data[b-1][f-1][r-1] += v;
    }
    for (int a =0; a < 4; a++) {
        for (int b=0; b < 3; b++) {
            for (int c=0; c < 10; c++) {
                cout << ' ' << data[a][b][c];
            }
            cout << endl;
        }
        if (a != 3) cout << "####################" << endl;
    }
}