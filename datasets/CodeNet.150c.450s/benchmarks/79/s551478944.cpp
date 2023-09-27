#include <bits/stdc++.h>

using namespace std;

int n[10000]={},r[10000]={};
int p[10000][50] = {};
int c[10000][50] = {};
int i=0;

int d[50]={};
int e[50] = {}; //今の状態
int e2[50] = {};

int main(){
    while(1){
        scanf("%d %d",&n[i],&r[i]);
        if(n[i]== 0 && r[i]== 0){
            break;
        }
        for(int j=0;j<r[i];j++){
            scanf("%d %d",&p[i][j],&c[i][j]);
        }
        i++;
    }
    int times = i;
    for(i=0;i<times;i++){
        //初期化
        int s=0;
        for(int k = n[i]; k>0;k--){
            e[s] = k;
            s++;
        }
        for(int j=0;j<r[i];j++){
            s=0;
            for(int t=p[i][j]-1;t<p[i][j]+c[i][j]-1;t++){
                d[s] = e[t];
                s++;
            }
            for(int t = 0;t < n[i];t++){
                e2[t] = e[t];
            }
            for(int t = 0;t<c[i][j];t++){
                e[t] = d[t];
            }
            s = 0;
            for(int t=c[i][j];t<p[i][j]+c[i][j]-1;t++){
                e[t] = e2[s];
                s++;
            }


        }
        
        cout << e[0] << endl;
    }

    return 0;
}
