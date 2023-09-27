#include <iostream>
#include<math.h>
#include<iomanip>
using namespace std;
 
int main()
{
    int  a=1, i = 0, j = 0, k = 0;
    char su;//0??????1??????2??????3??????
    cin >> a;
    int b[4][13];
    for(i=0;i<4;i++){
        for(j=0;j<13;j++){
            b[i][j]=1;
            }
        }
    for(i=0;i<a;i++){
        cin >> su >> k;
        if(su=='S'){
            b[0][k-1]=0;//??????????????0
            }
        if(su=='H'){
            b[1][k-1]=0;//??????????????0
            }
        if(su=='C'){
            b[2][k-1]=0;//??????????????0
            }
        if(su=='D'){
            b[3][k-1]=0;//??????????????0
            }
        }
    for(i=0;i<4;i++){
        for(j=0;j<13;j++){
            if(b[i][j]==1){
                if(i==0){
                    cout << 'S' << ' ' << j+1 << endl;
                }
                if(i==1){
                    cout << 'H' << ' ' << j+1 << endl;
                }
                if(i==2){
                    cout << 'C' << ' ' << j+1 << endl;
                }
                if(i==3){
                    cout << 'D' << ' ' << j+1 << endl;
                }
            }
        }
    }
 
 
 
 
}