#include <iostream>
#include <queue>

using namespace std;

#define MAX 110
int matrix[MAX][MAX];
int dst[MAX];

void input(int num){
    for(int i=0;i<MAX;i++){
        dst[i] = -1;
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
}

void bfs(){

}

int main(){
    int num; cin >> num;
    input(num);

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