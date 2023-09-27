#include<bits/stdc++.h>
using namespace std;
bool solve(){
    int arr[100001]={0};
    int N,K;
    scanf("%d%d",&N,&K);
    if(N==0&&K==0)return false;
    for(int i=0;i<N;i++){
        scanf("%d",&arr[i+1]);
        arr[i+1]+=arr[i];
    }
    int ma=INT_MIN;
    for(int i=0;i+K<=N;i++){
        ma=max(ma,arr[i+K]-arr[i]);
    }
    printf("%d\n",ma);
    return true;
}

int main(){
    while(solve());
}