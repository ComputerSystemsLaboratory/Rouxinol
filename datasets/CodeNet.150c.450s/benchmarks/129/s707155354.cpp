#include <iostream>
using namespace std;
int main(void){

int r,c,a;  //ｒが行（横）ｃが列（縦）
    cin >> r >> c;
    int spreadsheet[r][c];
    int total1 = 0,total2 = 0,sumyoko = 0;
    
    
    
    for(int i = 0; i < r; i++){
        
        for(int j = 0; j < c;j++){
            cin >> a;
            spreadsheet[i][j] = a;
        }
    }
    
    for(int k = 0; k<r;k++){  //横の列の合計を出す   
        
        for(int l = 0; l < c;l++){
            cout << spreadsheet[k][l] << " ";
            total1 += spreadsheet[k][l];
            sumyoko += spreadsheet[k][l]; 
        }
        cout << total1 << endl;
        total1 = 0;
        
    }
    //cout << endl;
    
    
    
    int q = 0;
    while(q < c){   //縦の列の合計を出す。
        
        for(int p = 0; p < r;p++){
            total2 += spreadsheet[p][q];
            //cout << spreadsheet[p][q] << " ";
        }
        cout << total2 << " ";
        q += 1;
        total2 = 0;
    }
    
    cout << sumyoko << endl;

    
}
