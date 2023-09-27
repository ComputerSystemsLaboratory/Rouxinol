#include<iostream>
#include<climits>
using namespace std;

int main(){
    int v, e;
    cin >> v >> e;

    int d[100][100];
    for(int i = 0; i < 100; i++){
        for(int j = 0; j < 100; j++){
            d[i][j] = INT_MAX;
        }
    }
    for(int i = 0; i < 100; i++)    d[i][i] = 0;

    int s, t, dist;
    for(int i = 0; i < e; i++){
        cin >> s >> t >> dist;
        d[s][t] = dist;
    }

    for(int k = 0; k < v; k++){
        for(int i = 0; i < v; i++){
            for(int j = 0; j < v; j++){
                if(d[i][k] == INT_MAX || d[k][j] == INT_MAX)    continue;
                d[i][j] = min(d[i][j], d[i][k]+d[k][j]);
            }
        }
    }

    for(int i = 0; i < v; i++){
        if(d[i][i] < 0){
            cout << "NEGATIVE CYCLE" << endl;
            return 0;
        }
    }

    for(int i = 0; i < v; i++){
        for(int j = 0; j < v; j++){
            if(j)   cout << " ";
            if(d[i][j] == INT_MAX)  cout << "INF";
            else                    cout << d[i][j];
        }
        cout << endl;
    }

    return 0;
}
