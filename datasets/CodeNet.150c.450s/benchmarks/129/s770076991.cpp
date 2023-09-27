#include <iostream>
using namespace std;

int main()
{
    int rc[110][110]{0};
    int r, c;
    cin >> r >> c;

    for (int i = 0; i < r; ++i) {
        for (int j = 0; j < c; ++j) {
            cin >> rc[i][j];
        }
    }

    for(int i=0; i<r; ++i){
        for(int j=0; j<c; ++j){
            rc[i][c] += rc[i][j];
        }
    }
    
    for(int j=0; j<r; ++j){
        for(int i=0; i<c+1; ++i){
            rc[r][i] += rc[j][i];
        }
    }

    for(int i=0; i<r+1; ++i){
        for(int j=0; j<c+1; ++j){
            cout << rc[i][j];
            if( j!= c){
                cout << ' ';
            }
        }
        cout << endl;
    }

    return 0;
}

