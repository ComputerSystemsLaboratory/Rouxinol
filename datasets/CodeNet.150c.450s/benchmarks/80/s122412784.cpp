#include<bits/stdc++.h>
using namespace std;
int main(){
    int ans,s=0,t=0;
    for(int i=0;i<4;++i){
        scanf("%d",&ans);
        s+=ans;
    }
    for(int i=0;i<4;++i){
        scanf("%d",&ans);
        t+=ans;
    }
    if(s >= t){
        printf("%d\n",s);
    }else if(s <= t){
        printf("%d\n",t);
    }
    return 0;
}