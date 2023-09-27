#include <bits/stdc++.h>
using namespace std;

const long long int INF = 1000000000000;

int main() {


    int v,e,s,t,d;

    cin >> v >> e;

    long long int table[v][v];

    for(int i=0;i<v;i++){
        for(int j=0;j<v;j++){
            table[i][j] = INF;
         }
    }

    for(int i=0;i<v;i++){
        table[i][i] = 0;
    }



    while(e--){
        cin >> s >> t >> d;
        table[s][t] = d;
    }

    for(int r=0;r<v;r++){
        for(int i=0;i<v;i++){
            for(int j=0;j<v;j++){
                if(table[i][j] > table[i][r] + table[r][j]){
                    if(  ( (table[i][r] == INF) && (table[r][j] < 0 ) ) || ( (table[r][j] == INF) && (table[i][r] < 0 ) ) ) {}
                    else{
                        table[i][j] = table[i][r] + table[r][j];
                    }

                }
            }
        }
    }

    for(int i=0;i<v;i++){
        if(table[i][i] != 0){
            cout << "NEGATIVE CYCLE" << endl;
            return 0;
        }
    }
    
    for(int i=0;i<v;i++){
        if(table[i][0] != INF) {
            cout << table[i][0];
        }
        else{
            cout << "INF";
        }
        for(int j=1;j<v;j++){
            if(table[i][j] != INF) {
                cout << ' ' << table[i][j];
            }
            else{
                cout << ' ' << "INF";
            }
        }
        cout << endl;
    }

    return 0;
}