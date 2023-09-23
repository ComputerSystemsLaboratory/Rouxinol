#include<iostream>
#include<stdio.h>
using namespace std;

int main(){
    int cardSet[4][13];
    int n;
    cin >> n;
    
    for(int i=0; i<4; i++){
        for(int j=0; j<13; j++){
            cardSet[i][j] = 0;
        }
    }
    
    for(int i=0; i<n; i++){
        char x; int y;
        cin >> x >> y;
        if(x == 'S'){
            cardSet[0][y-1] = 1;
        }else if(x == 'H'){
            cardSet[1][y-1] = 1;
        }else if(x == 'C'){
            cardSet[2][y-1] = 1;
        }else if(x == 'D'){
            cardSet[3][y-1] = 1;
        }
    }
    
    for(int i=0; i<4; i++){
        for(int j=0; j<13; j++){
            if(cardSet[i][j] != 1){
                if(i == 0){
                    cout << "S " << j + 1 << endl; 
                }else if(i == 1){
                    cout << "H " << j + 1 << endl;
                }else if(i == 2){
                    cout << "C " << j + 1 << endl;
                }else if(i == 3){
                    cout << "D " << j + 1 << endl;
                }
            }
        }
    }
    
    
    return 0;
}