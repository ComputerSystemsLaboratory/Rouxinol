#include<iostream>
#include <stdio.h>
using namespace std;

int main(){
    int n;
    int b,f,r,v;
    string m="####################";
    int num[4][3][10];
    int i,j,k;
    
    for (i = 0; i < 4; i++){
        for (j = 0; j < 3; j++){
            for (k = 0; k < 10; k++){
                num[i][j][k]=0;
            }
        }
    }

    cin >> n;
    for (i = 0; i < n;i++){
        cin >> b >> f >> r >> v;
        num[b-1][f-1][r-1]=num[b-1][f-1][r-1] + v;
    }
    
    for (i = 0; i < 4; i++){
        for (j = 0; j < 3; j++){
            for (k = 0; k < 10; k++){
                if (k==9){
                    cout << " " << num[i][j][k] << endl;
                }else{
                    cout << " " <<  num[i][j][k];
                }
            }
        }
        if(i!=3)cout << m << endl;
    }
    
    return 0;
}