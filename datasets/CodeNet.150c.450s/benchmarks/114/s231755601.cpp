#include <iostream>
using namespace std;

const int white = 0;
const int gray = 1;
const int black = 2;
const int Max_n = 100;
const int Infty = (1 << 21);

int M[Max_n][Max_n];
int n;

int prim(){
    int u, minv;
    int color[Max_n], d[Max_n], p[Max_n];
    for(int i=0; i<n; i++){
        color[i] = white;
        d[i] = Infty;
        p[i] = -1;
    }

    d[0] = 0;

    while(1){
        minv = Infty;
        u = -1;
        for(int i=0; i<n; i++){
            if(color[i] != black && d[i] < minv){
                minv = d[i];
                u = i;
            }
        }
        if(u == -1){
            break;
        }

        color[u] = black;

        for(int v=0; v<n; v++){
            if(color[v] != black && M[u][v] != Infty){
                if(M[u][v] < d[v]){
                    d[v] = M[u][v];
                    p[v] = u;
                    color[v] = gray;
                }
            }
        }
    }

    int sum = 0;
    for(int i=0; i<n; i++){
        if(p[i] != -1) sum += M[i][p[i]];
    }
    return sum;
}

int main(){
    cin >> n;
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            int e; cin >> e;
            M[i][j] = (e == -1) ? Infty : e;
        }
    }

    cout << prim() << endl;


    return 0;
}
