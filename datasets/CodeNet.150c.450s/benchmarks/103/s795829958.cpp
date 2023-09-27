#include<cstdio>
#include<cmath>
#include<cstring>
#include<iostream>
#include<algorithm>
using namespace std;
long long int fie[110][11][1100];
int main(){
    while(1){
        memset(fie,0,sizeof(fie));
        int N,S;
        cin>>N>>S;
        if(N==0&&S==0)break;
        fie[1][0][0]=1;fie[1][1][1]=1;
        for(int i=1;i<9;i++){
            for(int j=0;j<10;j++){
                for(int k=0;k<=1000;k++){
                    fie[i+1][j][k]+=fie[i][j][k];
                    fie[i+1][j+1][k+i+1]+=fie[i][j][k];
                }
            }
        }
        cout<<fie[9][N][S]+fie[9][N-1][S]<<endl;
    }
    return 0;
}