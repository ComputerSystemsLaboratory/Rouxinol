#include <iostream>
using namespace std;
 
int main(){
    int l[4][3][10];
    for(int p = 0; p < 4; p++){
        for(int q = 0; q < 3; q++){
            for(int r = 0; r < 10; r++){
                l[p][q][r] = 0;
            }
        }
    }
 
    int n;
    cin >> n;
 
    for(int i = 0; i < n; i++){
        int p, q, r, s;
        cin >> p >> q >> r >> s;
        l[p-1][q-1][r-1] += s;
    }
 
    for(int p = 0; p < 4; p++){
        for(int q = 0; q < 3; q++){
            for(int r = 0; r < 10; r++){
                cout << ' ' << l[p][q][r] << flush;
            }
            cout << endl;
        }
        if(p == 3){
            break;
        }
        cout << "####################" << endl;
    }
 
    return(0);
}