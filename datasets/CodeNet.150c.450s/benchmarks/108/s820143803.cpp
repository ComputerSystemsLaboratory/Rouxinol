#include<bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int) (n); i++)
using namespace std;

#define MAX 100

int d[MAX], t = 0, M[MAX][MAX] = {}, n;

void bfs(){
    queue<int> todo;
    d[0] = 0;
    todo.push(0);
    while(!todo.empty()){
        int m = todo.front();
        todo.pop();
        rep(i, n){
            if(d[i] == -1 && M[m][i]){
                d[i] = d[m] + 1;
                todo.push(i);
            }
        }
    }
    return;
}

int main(){
    cin >> n;
    fill(d, d + n, -1);
    int m, l;
    rep(i, n){
        cin >> m >> l;
        rep(j, l){
            int o;
            cin >> o;
            M[m - 1][o - 1] = 1;
        }
    }
    bfs();
    rep(i, n){
        cout << i + 1 << " " << d[i] << endl;
    }
    
    return 0;
}
