#include<iostream>
using namespace std;

int main(){
    int n,b,f,r,v; 
    int house[4][3][10];
    
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 3; j++) {
            for (int k = 0; k < 10; k++){
                house[i][j][k] = 0;
            }
        }
    }
    
    cin >> n;
    for (int x = 0 ; x < n; x++) {
        cin >> b >> f >> r >> v;
        
        house[b-1][f-1][r-1] += v;
        
    }  
    
    for (int i = 0; i < 4; i++) {
        if(i > 0) cout << "####################\n";
        for (int b = 0; b < 3; b++) {
            for (int r = 0; r < 10; r++){
                cout << " " << house[i][b][r];
            }
            cout << endl;
        }
        
    }
    
   
    return 0;
}