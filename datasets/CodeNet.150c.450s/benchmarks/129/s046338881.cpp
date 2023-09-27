#include <iostream>
#include <vector>
using namespace std;

int main(){
    int r,c;
    cin >> r >> c;
    vector<vector<int> > t(r+1, vector<int>(c+1,0));
    for(int i=0; i<r; i++){
        for(int j=0; j<c; j++){
            cin >> t[i][j];
            t[r][j] += t[i][j];
            t[i][c] += t[i][j];
            t[r][c] += t[i][j];
        }
    }

    for(int i=0; i<=r; i++){
        for(int j=0; j<c; j++){
            cout << t[i][j] << " ";
        }
        cout << t[i][c] << endl;
    }
    return 0;
}

