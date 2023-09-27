#include<bits/stdc++.h>
using namespace std;

int main(){
    int d;
    while(scanf("%d",&d)!=EOF){
        int ans=0;
        for(int i=d;i<600;i+=d)ans+=i*i*d;
        printf("%d\n",ans);
    }
    return 0;
}