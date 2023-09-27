#include<iostream>

using namespace std;

int main(){
    int n;
    int d[1001][11][21];
    int i,j,k,l;
    l = 0;
    for(i = 1;i < 1001;i++){
        for(j = 1;j < 11;j++){
            for(k = 1;k < 21;k++){
                if((!(j%2))&&(i%3)){
                    if(k == 20) continue;
                }
                d[i][j][k] = l;
                l++;
            }
        }
    }
    cin >> n;
    for(i = 0;i < n;i++){
        cin >> j >> k >> l;
        cout << d[1000][1][1]-d[j][k][l] << endl;
    }
}