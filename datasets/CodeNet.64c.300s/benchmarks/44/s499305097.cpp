#include <iostream>
#include <algorithm>
using namespace std;

const int INF = 1<<28;

int main(){
    int n,i,j,k,a,b,c;
    while( cin >> n, n ){
        int cost[10][10];
        for(i=0;i<10;i++){
            for(j=0;j<10;j++){
                cost[i][j] = INF;
                if(i==j) cost[i][j] = 0;
            }
        }
        for(i=0;i<n;i++){
            cin >> a >> b >> c;
            cost[a][b] = cost[b][a] = c;
        }
        for(k=0;k<10;k++){
            for(i=0;i<10;i++){
                for(j=0;j<10;j++){
                    cost[i][j] = min(cost[i][j], cost[i][k]+cost[k][j]);
                }
            }
        }
        int sumCost, minCost = INF, city;
        for(i=0;i<10;i++){
            sumCost = 0;
            for(j=0;j<10;j++){
                if( cost[i][j] < INF ) sumCost += cost[i][j];
            }
            if( sumCost && sumCost < minCost ){
                minCost = sumCost;
                city = i;
            }
        }
        cout << city << ' ' << minCost << endl;
    }
    return 0;
}