#include<bits/stdc++.h>
using namespace std;

int f[1000001];
int main(){
    fill_n(f,1000001,1);
    f[0]=f[1]=0;
    
    for(int i=2;i<1000001;i++){
        f[i]+=f[i-1];
        if(!f[i])continue;
        for(int j=i+i;j<1000001;j+=i)f[j]=0;
    }
    
    int N;
    
    while(scanf("%d",&N)!=EOF){
        printf("%d\n",f[N]);
    }
    
    return 0;
    
}