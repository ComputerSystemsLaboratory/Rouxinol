#include <iostream>
#include <cstdio>
using namespace std;
const int MAX_V = 15;
const int MAX_E = 50;
const int INF = 100000000;
int V, E;
int d[MAX_V][MAX_V];  //各町間の通勤時間
int main(int argc, const char * argv[])
{
    while (true) {
        scanf("%d", &E);  //道の数
        if (E == 0) break;
        V = 0;
        //d[][]の初期化
        for (int i = 0; i < MAX_V; i++) {
            for (int j = 0; j < MAX_V; j++) d[i][j] = INF;
        }
        
        for (int i = 0; i < E; i++) {
            int a, b, c;
            scanf("%d %d %d", &a, &b, &c);
            V = max(V,max(a,b));  //0~最大の番号までが町の番号
            d[a][b] = min(d[a][b], c);
            d[b][a] = d[a][b];
        }
        
        for (int i = 0; i <= V; i++) d[i][i] = 0;
        
        for (int k = 0; k <= V; k++) {
            for (int i = 0; i <= V; i++) {
                for (int j = 0; j <= V; j++) {
                    d[i][j] = min(d[i][j], d[i][k]+d[k][j]);
                }
            }
        }
        
        int town = 0;  //とりあえず、0にセット
        int dist = 0;
        for (int i = 0; i <= V; i++) dist += d[0][i];
        for (int i = 1; i <= V; i++) {
            int total = 0;
            for (int j = 0; j <= V; j++) {
                total += d[i][j];
            }
            if (total < dist) {
                town = i;
                dist = total;
            }
        }
        printf("%d %d\n", town, dist);
    }
    return 0;
}