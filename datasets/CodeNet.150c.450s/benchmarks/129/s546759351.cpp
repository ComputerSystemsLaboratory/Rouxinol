#include <iostream>
using namespace std;
int main(void){
    int r, c;
    cin >> r >> c;
    
    int *table;
    table = new int[(r + 1) * (c + 1)];
    
    int i, j;
    int rowsum, colsum;
    
    for(i = 0; i < r; i++){
        rowsum = 0;
        for(j = 0; j < c; j++){
            cin >> table[(c + 1) * i + j];
            rowsum += table[(c + 1) * i + j];
        }
        table[(c + 1) * i + c] = rowsum;
    }
    
    for(j = 0; j <= c; j++){
        colsum = 0;
        for(i = 0; i < r; i++){
            colsum += table[(c + 1) * i + j];
        }
        table[(c + 1) * r + j] = colsum;
    }
    
    for(i = 0; i <= r; i++){
        for(j = 0; j <= c; j++){
            if(j) cout << " ";
            cout << table[(c + 1) * i + j];
        }
        cout << endl;
    }
    delete[] table;
    return 0;
}