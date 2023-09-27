#include <stdio.h>
#include<vector>
using namespace std;
#define rep(i,n) for(int i=0;i<n;i++)
int main(void){
    int V,E,R;
    scanf("%d %d %d",&V,&E,&R);
    int s[2005],t[2005],d[2005];
    rep(i,E){
        scanf("%d %d %d",&s[i],&t[i],&d[i]);
    }
    //Bellman-Ford
    int map[1005];
    rep(i,V){map[i]=1111111111;}
    map[R]=0;
    rep(i,V){
        bool end=true;
        rep(j,E){
            if(map[s[j]]!=1111111111&&map[t[j]]>map[s[j]]+d[j]){
                if(i>=V-1){
                    printf("NEGATIVE CYCLE\n");
                    return 0;
                }else{
                    map[t[j]]=map[s[j]]+d[j];
                    end=false;
                }
            }
        }
        if(end)break;
    }
    rep(i,V){
        if(map[i]!=1111111111)printf("%d\n",map[i]);
        else printf("INF\n");
    }
    return 0;
    
}

