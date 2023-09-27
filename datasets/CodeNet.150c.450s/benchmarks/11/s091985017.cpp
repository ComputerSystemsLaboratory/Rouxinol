#include<iostream>
using namespace std;

int main(){
    int cards[4][13] = {};

    int n, y;
    char x;

    cin >> n;

    for (int i = 0; i < n; i++){
        cin >> x >> y;
        if (x == 'S') cards[0][y - 1] = 1;
        if (x == 'H') cards[1][y - 1] = 1;
        if (x == 'C') cards[2][y - 1] = 1;
        if (x == 'D') cards[3][y - 1] = 1;
    }

    for (int j = 0; j < 4; j++){
        for (int l = 0; l < 13; l++){
            if (cards[j][l] == 0){
                if (j == 0) cout << "S " << l + 1 << endl;
                if (j == 1) cout << "H " << l + 1 << endl;
                if (j == 2) cout << "C " << l + 1 << endl;
                if (j == 3) cout << "D " << l + 1 << endl;  
            }
        }
    }

    return 0;
}
