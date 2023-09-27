#include <bits/stdc++.h>

using namespace std;

#define N 10
#define INF (1e9)

int main(){
    int M,a,b,c;
    while(cin >> M, M){
        int d[N][N],mx = 0;
        fill(d[0],d[N],INF);
        for(int i = 0 ; i < M ; i++){
            cin >> a >> b >> c;
            d[a][b] = d[b][a] = c;
            mx = max(mx,max(a,b));
        }
        mx++;
        for(int i = 0 ; i < mx ; i++){
            d[i][i] = 0;
        }
        for(int k = 0 ; k < mx ; k++){
            for(int i = 0 ; i < mx ; i++){
                for(int j = 0 ; j < mx ; j++){
                    d[i][j] = min(d[i][j],d[i][k]+d[k][j]);
                }
            }
        }
        int res = INF,vnum = -1;
        for(int i = 0 ; i < mx ; i++){
            int sum = 0;
            for(int j = 0 ; j < mx ; j++){
                sum += d[i][j];
            }
            if(sum < res){
                res = sum;
                vnum = i;
            }
        }
        cout << vnum << " " << res << endl;
    }
    return 0;
}