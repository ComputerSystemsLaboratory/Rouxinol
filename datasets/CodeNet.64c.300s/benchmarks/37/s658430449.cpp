#include <cstdio>
using namespace std;

int min(int a,int b){return a<b?a:b;}
int max(int a,int b){return a>b?a:b;}
int a[1010],N;
int main(){
    for(int i=1;i<=1000;i++){
        int t=0;
        for(int j=i;t<=1000;j++){
            a[t]++;
            t+=j;
        }
    }
    while(scanf("%d",&N),N){
        printf("%d\n",a[N]-1);
    }
    return 0;
}