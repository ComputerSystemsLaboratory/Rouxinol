#include<cstdio>
using namespace std;
#define MAX 100000
typedef long long llong;
int N,K;
llong T[MAX];

int check(llong P){
    int bagNum=0;
    for(int trackNum=0;trackNum<K;trackNum++){
        llong sum=0;
        while(sum+T[bagNum] <= P){
            sum += T[bagNum];
            bagNum++;
            if(bagNum == N){
                return N;
            }
        }
    }
    return bagNum;
}

int Ans(){
    llong left=0;
    llong right=100000*10000;
    llong mid;
    while(right-left>1){
        mid=(left+right)/2;
        int p = check(mid);
        if(p>=N){
            right=mid;
        }else{
            left=mid;
        }
    }
    return right;
}

int main(){
    scanf("%d %d", &N,&K);
    for(int i=0;i<N;i++){
        scanf("%d",&T[i]);
    }
    llong ans = Ans();
    printf("%d\n", ans);
}
