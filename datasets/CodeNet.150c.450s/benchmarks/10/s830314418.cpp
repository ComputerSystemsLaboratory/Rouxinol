#include<iostream>
using namespace std;

int main(){
    int n, b, f, r, v;

    cin >> n;

    int count[5][4][11] = {};

    for (int i = 0; i < n; i++){
        cin >> b >> f >> r >> v;
        count[b][f][r] += v; 
    }

    for (int j = 1; j <= 4; j++){
        for (int l = 1; l <= 3; l++){
            for (int m = 1; m <= 10; m++){
                cout << " " << count[j][l][m];
            }
            cout << endl;
        }
        if (j != 4){
            cout << "####################" << endl;
        }
    }
    return 0;
}
