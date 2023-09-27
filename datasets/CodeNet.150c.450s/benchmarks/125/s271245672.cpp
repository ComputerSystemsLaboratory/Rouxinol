#include<bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int) (n); i++)
using namespace std;

#define MAX 100

int d[MAX], f[MAX], t = 0, M[MAX][MAX] = {}, n;

void dfs(){
    int seen[MAX] = {};
    rep(i, n){
        if(seen[i]) continue;
        stack<int> todo;
        seen[i] = 1;
        todo.push(i);
        t++;
        d[i] = t;
        while(!todo.empty()){
            int m = todo.top();
            rep(j, n + 1){
                if(j == n){
                    todo.pop();
                    t++;
                    f[m] = t;
                    break;
                }
                if(M[m][j] && !seen[j]){
                    todo.push(j);
                    t++;
                    d[j] = t;
                    seen[j] = 1;
                    break;
                }
            }
        }
    }
}

int main(){
    cin >> n;
    rep(i, n){
        int l, p;
        cin >> l >> p;
        rep(j, p){
            int q;
            cin >> q;
            M[l - 1][q - 1] = 1;
        }
    }
    dfs();
    
    rep(i, n){
        cout << i + 1 << " " << d[i] << " " << f[i] << endl;
    }
    
    return 0;
}
