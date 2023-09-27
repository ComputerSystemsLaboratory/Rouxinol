#include <iostream>

using namespace std;
int main(){
    int n;
    cin >> n;
    int mat[n][n];
    for(int i = 0; i < n; ++i){
        for(int j = 0; j < n; ++j){
            mat[i][j] = 0;
        }
    }
    for(int i = 0; i < n; ++i){
        int id;
        cin >> id;
        int k;
        cin >> k;
        int v;
        for(int j = 0; j < k; ++j){
            cin >> v;
            mat[id-1][v-1] = 1;
        }
    }
    for(int i = 0; i < n; ++i){
        for(int j = 0; j < n; ++j){
            if(j == 0){
                cout << mat[i][j];
            } else {
                cout << ' ' << mat[i][j];
            }
        }
        cout << endl;
    }
}