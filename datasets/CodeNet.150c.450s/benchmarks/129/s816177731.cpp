#include<iostream>
using namespace std;

int main()
{
    int r,c,arr[101][101] = {};
    cin >> r >> c;
    
    for (int i=0; i<r; i++){
        for (int j=0; j<c; j++){
            cin >> arr[i][j];
            arr[r][j] += arr[i][j];
            arr[i][c] += arr[i][j];
            arr[r][c] += arr[i][j];
        }
    }
    
    for (int m=0; m <= r; m++){
        for (int k=0; k <= c; k++){
            cout << arr[m][k];
            
            if(k == c){
                cout << endl;
            }else{
                cout << ' ';
            }
        }
    }
    
    return 0;
}