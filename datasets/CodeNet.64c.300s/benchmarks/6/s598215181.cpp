#include    <iostream>

using namespace std;

int main() {
    // stock[b][r][f]で、b棟r階のf番目の部屋を表す
    int stock[4][3][10] = {{{0}}};
    int n;

    cin >> n;
    for(int i = 0; i < n; i++) {
        int _b, _r, _f, _v;
        cin >> _b >> _r >> _f >> _v;

        stock[_b-1][_r-1][_f-1] += _v;
    }

    for(int i = 0; i < 4; i++) {
        for(int j = 0; j < 3; j++) { 
            for(int k = 0; k < 10; k++)
                cout << ' ' << stock[i][j][k];
            cout << endl;
        }
        cout << ((i != 3) ? "####################\n" : "");
    }

    return 0;
}
