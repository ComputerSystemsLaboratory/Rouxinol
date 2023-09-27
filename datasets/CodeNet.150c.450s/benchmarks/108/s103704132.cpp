#include <iostream>
#include <queue>

using namespace std;

#define MAX 110
int num;
int matrix[MAX][MAX];
int dst[MAX];

void input(){
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
    queue<int> Q;
    Q.push(0);
    dst[0] = 0;
    while(Q.size() != 0){
        int cur = Q.front();
        for(int i=0;i<num;i++){
            if(matrix[cur][i]==1){
                if(dst[i]==-1){
                    Q.push(i);
                    dst[i] = dst[cur] + 1;
                }
            }
        }
        Q.pop();
    }
    for(int i=0;i<num;i++){
        cout << i+1 << " " <<  dst[i] << endl;
    }
}

int main(){
    cin >> num;
    input();
    bfs();
}