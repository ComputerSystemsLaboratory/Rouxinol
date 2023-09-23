#include <cstdio>
#include <algorithm>

using namespace std;

#define INF 100000

int d[10][10];

int main(){
    while(true){
        for(int i = 0; i < 10; i++){
            for(int j =0; j < 10; j++){
                if(i == j) d[i][j] = 0;
                else d[i][j] = INF;
            }
        }
        int n;
        scanf("%d",&n);
        if(n==0)break;
        for(int i = 0; i < n; i++){
            int a,b,c;
            scanf("%d %d %d",&a, &b, &c);
            d[a][b] = d[b][a] = c;
        }
        for(int k = 0; k < 10; k++){
            for(int i =0; i < 10; i++){
                for(int j = 0; j < 10; j++){
                    d[i][j] = min(d[i][j], d[i][k] + d[k][j]);
                }
            }
        }
        int ans = 1000000;
        int city = 100;
        for(int i =0; i < 10; i++){
            int tmp = 0;
            for(int j = 0; j < 10; j++){
                if(d[i][j] != INF)tmp += d[i][j];    
            }
            // 問題に記述されていない都市番号のtmpが0と最小になるため除外
            if(ans > tmp && tmp != 0){
                ans = tmp;
                city = i;
            }
        }
        printf("%d %d\n", city, ans);
        // for(int i =0; i < 10; i++){
        //     for(int j = 0; j < 10; j++){
        //         printf("%d ", d[i][j]);
        //     }
        //     printf("\n");
        // }
    }
    return 0;
} 
