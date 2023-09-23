#include<iostream>
using namespace std;
int main(){
    int r, c;
    int a = 0;
    int b = 0;
    
    cin >> r >> c;
    
    int dim[r][c];
    
    for(int i = 0; i < r; i++){
        for(int j = 0; j < c; j++){
            cin >> dim[i][j];
        }
    }
    
    for(int i = 0; i < r; i++){
        for(int j = 0; j < c; j++){
            cout << dim[i][j] << " ";
            a += dim[i][j];
        }
        
        cout << a << endl;
        
        a = 0;
    }
    
    for(int i = 0; i < c; i++){
        for(int j = 0; j < r; j++){
            a += dim[j][i];
        }
        
        cout << a << " ";
        
        b += a;
        
        a = 0;
        
        
    }
    
    cout << b << endl;
    
}
