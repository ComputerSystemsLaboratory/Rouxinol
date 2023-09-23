#include <iostream>
using namespace std;
 
int main(){
    int r, c;
    int a[101][101] = {};
    cin >> r >> c;
    
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cin >> a[i][j];
            a[i][c] += a[i][j];
            a[r][j] += a[i][j];
            a[r][c] += a[i][j];
        }
    }
    for(int i=0;i<r+1;i++){
        for(int j=0;j<c;j++){
            cout << a[i][j] << " ";
        }
        cout << a[i][c] << endl;
    }
}
