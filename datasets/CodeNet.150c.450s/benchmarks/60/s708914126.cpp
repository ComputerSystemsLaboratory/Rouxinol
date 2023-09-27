#include <iostream>

#define MAX 110
using namespace std;

int main(){
    int num; cin >> num;
    int matrix[MAX][MAX];
    for(int i=0;i<MAX;i++){
        for(int j=0;j<MAX;j++){
            matrix[i][j] = 0;
        }
    }
    for(int i=1;i<=num;i++){
        int v; cin >> v;
        int tmp; cin >>tmp;
        for(int j=0;j<tmp;j++){
            int vi; cin >> vi;
            matrix[v-1][vi-1] = 1;
        }
    }
    for(int i=0;i<num;i++){
        for(int j=0;j<num;j++){
            if(j==0)
                cout << matrix[i][j];
            else
                cout << " " << matrix[i][j];
        }
        cout << endl;
    }
}