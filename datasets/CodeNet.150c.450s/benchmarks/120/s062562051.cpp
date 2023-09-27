#include <iostream>
int a[15][10005];
int r , c;
int ans = 0;
void f1(){
    int sum = 0;
    for(int i = 0;i < c;i++){
        int x = 0;
        for(int j = 0;j < r;j++){
            x = (a[j][i] == 1)? x + 1 : x;
        }
        sum = (x > r - x)? sum + x : sum + r - x;
    }
    ans = (sum > ans)? sum : ans;
}
void f(int p){
    if(p == r){
        f1();
    }else{
        f(p + 1);
        for(int i = 0;i < c;i++){
            a[p][i] = 1 - a[p][i];
        }
        f(p + 1);
        for(int i = 0;i < c;i++){
            a[p][i] = 1 - a[p][i];
        }
    }
}
int main(){
    while(std::cin >> r >> c){
        if(r == 0 && c == 0){
            break;
        }
        ans = 0;
        for(int i = 0;i < r;i++){
            for(int j = 0;j < c;j++){
                std::cin >> a[i][j];
            }
        }
        f(0);
        std::cout << ans << "\n";
    }
}
