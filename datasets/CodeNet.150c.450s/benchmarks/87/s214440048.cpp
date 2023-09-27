#include <iostream>
using namespace std;

int H;
int F[11][6] = {};

void update(){
    for(int j=1;j<=5;j++){
        for(int i=1;i<=H;i++){
            if(F[i][j]==0) continue;
            int now = i;
            while(now!=1 && F[now-1][j]==0){
                swap(F[now][j],F[now-1][j]);
                now--;
            }
        }
    }
//    for(int i=H;i>=1;i--) for(int j=1;j<=5;j++) cerr << F[i][j] << (j!=5? " ":"\n");
}

int calc(){
    int sum = 0;
    for(int i=1;i<=H;i++){
        int num = 0,len = 0,id = 0;
        for(int j=1;j<=3;j++){
            if(F[i][j]!=0 && F[i][j]==F[i][j+1] && F[i][j+1]==F[i][j+2]){
                num = F[i][j];
                F[i][j] = 0; F[i][j+1] = 0;F[i][j+2] = 0;
                id = j;
                break;
            }
        }
        len = 3;
        if(num!=0){
            if(id==1){
                if(F[i][4]==num){
                    len++;
                    F[i][4] = 0;
                    if(F[i][5]==num){
                        len++;
                        F[i][5] = 0;
                    }
                }
            }else if(id==2){
                if(F[i][1]==num){
                    len++;
                    F[i][1] = 0;
                }
                if(F[i][5]==num){
                    len++;
                    F[i][5] = 0;
                }
            }else{
                if(F[i][2]==num){
                    len++;
                    F[i][2] = 0;
                    if(F[i][1]==num){
                        len++;
                        F[i][1] = 0;
                    }
                }
            }
        }
        sum += len*num;
    }
    return sum;
}

int main(){
    while(cin >> H && H){
        for(int i=1;i<=H;i++) for(int j=1;j<=5;j++){
            cin >> F[H-i+1][j];
        }
        int ans = 0;
        while(true){
            int s = calc();
            if(s==0) break;
            ans += s;
            update();
        }
        cout << ans << endl;
    }
}
