#include<bits/stdc++.h>
using namespace std;
int main(){
    int N;scanf("%d",&N);
    int K=N;
    map<int,int> a;
    for(int i=2;i<sqrt(N)+3;i++){
        while(K%i==0){
            a[i]++;
            K/=i;
        }
    }
    if(K!=1)a[K]++;
    printf("%d%s",N,":");
    for(auto p:a){
        for(int i=0;i<p.second;i++){
            printf(" %d",p.first);
        }
    }
    printf("\n");
}
