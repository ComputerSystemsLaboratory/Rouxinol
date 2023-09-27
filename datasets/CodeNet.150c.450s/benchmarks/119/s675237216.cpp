#include <iostream>
#include <vector>
#include <string>
#include <cmath>
#include <algorithm>

using namespace std;

int c[52][52];

void er(int i,int j){
    c[i][j]--;
    if(c[i+1][j-1])
        er(i+1,j-1);
    if(c[i][j+1])
        er(i,j+1);
    if(c[i+1][j])
        er(i+1,j);
    if(c[i+1][j+1])
        er(i+1,j+1);
    if(c[i-1][j+1])
        er(i-1,j+1);
    if(c[i-1][j])
        er(i-1,j);
    if(c[i-1][j-1])
        er(i-1,j-1);
    if(c[i][j-1])
        er(i,j-1);
}

int main(void){
    int w,h;
    int i,j;
    int a;
    while(true){
        cin >> w >> h;
        if(w == 0){
            break;
        }
        for(i = 0;i < 52;i++){
            for(j = 0;j < 52;j++){
                c[i][j] = 0;
            }
        }
        for(i = 1;i <= h;i++){
            for(j = 1;j <= w;j++){
                cin >> c[i][j];
            }
        }
        a = 0;
        for(i = 1;i <= h;i++){
            for(j = 1;j <= w;j++){
                if(c[i][j]){
                    er(i,j);
                    a++;
                }
            }
        }
        cout << a << endl;
    }
}