#include<cstdio>
#include<cmath>
#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    while(1){
        int m,n;
        cin>>m>>n;
        if(m==0&&n==0)break;
        long long int fie[20][20]={0};
        int ko[20][20]={0};
        fie[1][1]=1;
        int p;
        cin>>p;
        for(int i=0;i<p;i++){
            int a,b;
            cin>>a>>b;
            ko[a][b]=1;
        }
        for(int i=1;i<19;i++){
            for(int j=1;j<19;j++){
                if(!ko[i][j+1])fie[i][j+1]+=fie[i][j];
                if(!ko[i+1][j])fie[i+1][j]+=fie[i][j];
            }
        }
        /*
        for(int i=1;i<19;i++){
            for(int j=1;j<19;j++){
                printf("[%d]",ko[i][j]);
            }
            puts("");
        }
        */
        cout<<fie[m][n]<<endl;
    }
    return 0;
}