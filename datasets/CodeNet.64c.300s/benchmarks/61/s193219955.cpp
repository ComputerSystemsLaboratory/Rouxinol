#include <utility>
#include <cstdio>
#include <cmath>
#include <climits>
#include <iostream>
using namespace std;

//---- Spreadsheet
int main(void){
    int r,c;
    cin >> r >> c;
    int s[r+1][c+1];
    for(int i=0; i<r; i++){
        s[i][c]=0;
        for(int j=0; j<c; j++){
            cin >> s[i][j];
            s[i][c]+=s[i][j];
        }
    }
    for(int j=0; j<c+1; j++){
        s[r][j]=0;
        for(int i=0; i<r; i++){
            s[r][j]+=s[i][j];
        }
    }
    for(int i=0; i<r+1; i++){
        for(int j=0; j<c; j++){
            cout << s[i][j] << " ";
        }
        cout << s[i][c];
        cout << endl;
    }
    return 0;
}