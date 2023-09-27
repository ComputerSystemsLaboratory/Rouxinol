#include<iostream>
using namespace std;

    int r,c;
    int mt[101][101];
int main(){

    cin >> r >> c;
    for(int i = 0;i<=c;i++){
        for(int j = 0;j<=r;j++){
            mt[i][j]=0;
        }
    }
    for(int i = 0;i<r;i++){
        for(int j = 0;j<c;j++){
            cin >> mt[i][j];
        }
    }
    
    for(int i =0;i<r;i++){
        for(int j=0;j<c;j++){
            mt[i][c] += mt[i][j];
            mt[r][j] += mt[i][j];
            cout << mt[i][j] << " ";
            if(j==c-1)cout << mt[i][c];
        }
        cout << endl;
    }
    for(int i=0;i<c;i++){
        mt[r][c] += mt[r][i];
        cout << mt[r][i] << " ";
    } 
    cout << mt[r][c] << endl;
}