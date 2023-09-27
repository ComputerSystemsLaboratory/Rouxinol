#include <iostream>
using namespace std;

int main() {
    int r, c;
    int sheet[101][101];
    for(int i=0; i<100; i++){
        for(int j=0; j<100; j++){
            sheet[i][j]=0;
        }
    }
    
    cin >> r >> c;
    for(int i=0; i<r; i++){
        for(int j=0; j<c; j++){
            cin >> sheet[i][j];
        }
    }
    int sum_r, sum_c, sum;
    for(int i=0; i<r; i++){
        sum_r=0;
        for(int j=0; j<c; j++){
            sum_r += sheet[i][j];
            cout << sheet[i][j] << " ";
        }
        cout << sum_r << endl;
    }
    sum=0;
    for(int i=0; i<c; i++){
        sum_c=0;
        for(int j=0; j<r; j++){
            sum_c += sheet[j][i];
        }
        sum += sum_c;
        cout << sum_c << " ";
    }
    cout << sum << endl;
    return 0;
}