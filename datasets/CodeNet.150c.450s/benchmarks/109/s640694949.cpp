#include<bits//stdc++.h>
using namespace std;
int main(){
    int n, h, m, s;
    while(scanf("%d", &n), n){
        int imos[86401] = {};
        for(int i = 0; i < n; i++){
            scanf("%d:%d:%d", &h, &m, &s);
            imos[3600*h+60*m+s]++;
            scanf("%d:%d:%d", &h, &m, &s);
            imos[3600*h+60*m+s]--;
        }
        int ans = 0, sum = 0;
        for(int i = 0; i < 86401; i++){
            sum += imos[i];
            ans = max(ans, sum);
        }
        printf("%d\n", ans);
    }
}
