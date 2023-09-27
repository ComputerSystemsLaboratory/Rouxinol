#include<iostream>
using namespace std;

int main(){
    int N, M;
    int field[21][21];
    int i, j;
    int x, y;
    char D;
    int dist;
    int pos[2];
    int xory;
    int porm;
    int n;
    cin >> N;
    while(N){
        pos[0] = 10;
        pos[1] = 10;
        n = 0;
        for(i=0;i<21;i++){
            for(j=0;j<21;j++){
                field[i][j] = 0;
            }
        }
        for(i=0;i<N;i++){
            cin >> x >> y;
            field[x][y] = 1;
        }
        cin >> M;
        for(i=0;i<M;i++){
            cin >> D >> dist;
            if(D=='N'){
                xory = 1;
                porm = 1;
            }else if(D=='S'){
                xory = 1;
                porm = -1;
            }else if(D=='E'){
                xory = 0;
                porm = 1;
            }else if(D=='W'){
                xory = 0;
                porm = -1;
            }
            for(j=0;j<dist;j++){
                pos[xory] += porm;
                if(field[pos[0]][pos[1]]){
                    field[pos[0]][pos[1]] = 0;
                    n++;
                }
            }
        }
        if(n<N){
            cout << "No" << endl;
        }else{
            cout << "Yes" << endl;
        }
        cin >> N;
    }
}