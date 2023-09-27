#include<iostream>
using namespace std;
int main(){
    int x, b, f, r, v, arr[4][3][10];
    for(int i = 0; i < 4; i++)
        for(int j = 0; j < 3; j++)
            for(int k = 0; k < 10; k++)
                arr[i][j][k] = 0;
    cin >> x;
    for(int i = 0; i < x; i++){
        cin >> b >> f >> r >> v;
        arr[b-1][f-1][r-1] += v;
    }

    for(int i = 0; i < 4; i++){
        if (i != 0) cout << "####################" << endl;
        for(int j = 0; j < 3; j++){
            for(int k = 0; k < 10; k++)
            cout << " " << arr[i][j][k];
            cout << endl;
        }
    }

    return 0;
}
