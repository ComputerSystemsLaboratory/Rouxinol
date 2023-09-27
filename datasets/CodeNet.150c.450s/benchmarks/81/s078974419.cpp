#include <iostream>
int d[10][10];
void init(){
    for(int i = 0;i < 10;i++){
        for(int j = 0;j < 10;j++){
            d[i][j] = (i == j)? 0 : 10000;
        }
    }
}
int main(){
    int n;
    while(std::cin >> n){
        if(n == 0){
            break;
        }
        init();
        for(int i = 0;i < n;i++){
            int a , b , cost;
            std::cin >> a >> b >> cost;
            d[a][b] = std::min(d[a][b] , cost);
            d[b][a] = std::min(d[b][a] , cost);
        }
        for(int k = 0;k < 10;k++){
            for(int i = 0;i < 10;i++){
                for(int j = 0;j < 10;j++){
                    d[i][j] = std::min(d[i][j] , d[i][k] + d[k][j]);
                }
            }
        }
        int ans = -1 , ans_d = 10000;
        for(int i = 0;i < 10;i++){
            int sum = 0;
            bool tf = false;
            for(int j = 0;j < 10;j++){
                sum += (d[i][j] == 10000)? 0 : d[i][j];
                tf = (d[i][j] == 10000 || i == j)? tf : true;
            }
            if(sum < ans_d && tf){
                ans = i , ans_d = sum;
            }
        }
        std::cout << ans << " " << ans_d << "\n";
    }
    return 0;
}
