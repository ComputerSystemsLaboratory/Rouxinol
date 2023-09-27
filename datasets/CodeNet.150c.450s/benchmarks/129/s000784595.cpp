#include<iostream>
#include <stdio.h>
using namespace std;

int main(){
    int r,c;
    int i,j;
    int d[101][101];
    int cc=0;
    int cr=0;
    
    cin >> r >> c;
    
    for (i=0;i<r;i++){
        for (j=0;j<c;j++){
            cin >> d[i][j];
            cc = cc + d[i][j];
            if (j==c-1)d[i][j+1]=cc;
        }
        cc =0;
    }
    
    for (j=0;j<c+1;j++){
        for (i=0;i<r;i++){
            cr = cr + d[i][j];
            if (i==r-1)d[i+1][j]=cr;
        }
        cr =0;
    }
    
    for (i=0;i<r+1;i++){
        for (j=0;j<c+1;j++){
            if (j==c){
                cout << d[i][j] << endl;;
            }else{
                cout << d[i][j] <<' ';
            }
        }
    }
    
    return 0;
}