#include<iostream>
#include<cstring>
using namespace std;

int table[10][10];
int town;
int INF = 9999;

void fw(){
    for(int k = 0; k <= town; k++){
        for(int i = 0; i <= town; i++){
            for(int j = 0; j <= town; j++){
                table[i][j] = min(table[i][j], table[i][k] + table[k][j]);
            }
        }
    }
}

void solve(){
    int ret, mintable = 1<<21;
    for(int i = 0; i <= town; i++){
        int candidate = 0;
        for(int j = 0; j <= town; j++){
            candidate += table[i][j];
        }
        if(candidate < mintable){
            mintable = candidate;
            ret = i;
        }
    }

    cout << ret << " " << mintable << endl;
}

int main(){
    while(1){
        int n;
        cin >> n;

        if(n == 0)  break;

        town = 0;
        memset(table, INF, sizeof(table));
        for(int i = 0; i < 10; i++) table[i][i] = 0;

        int a, b, c;
        while(n-- > 0){
            cin >> a >> b >> c;
            table[a][b] = table[b][a] = c;
            town = max(town, max(a,b));
        }

        fw();
        solve();
    }
    return 0;
}
