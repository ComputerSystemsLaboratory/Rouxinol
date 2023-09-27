#include <iostream>
using namespace std;

int main(void){
    int r,c;
    cin >>r>>c;
    int mat[r][c];
    
    for(int i=0;i<r;i++){
        int r_s=0;
        for(int j=0;j<c;j++){
            cin >> mat[i][j];
            r_s+=mat[i][j];
            cout << mat[i][j] << " ";
        }
        cout << r_s << endl;
    }
    
    int r_c_s = 0;
    for(int j=0;j<c;j++){
        int c_s=0;
        for(int i=0;i<r;i++){
            c_s+=mat[i][j];
        }
        r_c_s += c_s;
        cout << c_s << " ";
    }
    cout << r_c_s << endl;

    return 0;
}

