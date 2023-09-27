#include <iostream>
using namespace std;
int main(void){
    // Here your code !
    int r,c;
    cin >> r >> c;
    int array[101][101] = {};
    
    
    for(int i=0;i<r;i++) {
        for(int j=0;j<c;j++) {
            cin >> array[i][j];
            array[i][c] = array[i][c] + array[i][j];
            array[r][j] = array[r][j] + array[i][j];
            array[r][c] = array[r][c] + array[i][j];
        }
    }
    
    for(int i=0;i<r+1;i++) {
        for(int j=0;j<c+1;j++) {
            cout << array[i][j];
            if(j!=c)
            cout << " ";
        }
        cout << endl;
    }
    
}