#include <iostream>
#include <algorithm>
using namespace std;

int N;
int a[110][110]={{0}};
int d[110][5]={{0}};
int T=1;

void dfs(int cur);

int main(){
        cin >> N;
        for(int i=0; i<N; i++){
                int v,n;
                cin >> v;
                cin >> n;
                for(int j=0; j<n; j++){
                        int V;
                        cin >> V;
                        a[v-1][V-1]=1;
                }
        }
        for(int i=0; i<N; i++){
                if(!d[i][0])dfs(i+1);
        }
        for(int i=0; i<N; i++){
                cout << i+1 << " ";
                for(int j=0; j<2; j++){
                        cout << d[i][j];
                        if(!j)cout << " ";
                }
        cout << endl;
        }
}


void dfs(int cur){
        d[cur-1][0]=T;
        T++;
        //cerr << "visiting_" << cur << " " << T << endl;
        for(int i=0; i<N; i++){
                if(a[cur-1][i] && !d[i][0])dfs(i+1);
        }
        d[cur-1][1]=T;
        T++;
        if(cur>1)cur--;
}