#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
#include<stack>

int main(){
    int n;
    scanf("%d",&n);
    int a[n+1][n+1];
    int i,j;
    for(i=1;i<=n;i++)for(j=1;j<=n;j++)a[i][j]=0;
    for(i=1;i<=n;i++){
        int q,k;
        scanf("%d %d",&q,&k);
        for(j=1;j<=k;j++) {
            int p;
            scanf("%d",&p);
            a[q][p]=1;
        }
    }
    int time=0;
    std::stack<int>S;
    int ans[n+1][3];
    
    
    
    S.push(1);
    time++;
    ans[1][1]=time;
    
    int color[n+1];
    color[1]=1;
    for(i=2;i<=n;i++)color[i]=0;//0??????????¨????
    int lastcheck=0;
    
    while(lastcheck==0){
        while(S.size()>=1){
            int flag=0;//flag=0??????pop
            for(i=1;i<=n;i++){
                if(i!=S.top()&& a[S.top()][i]==1 &&color[i]==0){
                    S.push(i);
                    color[i]=1;
                    time++;
                    ans[i][1]=time;
                    flag=1;
                    break;
                }
            }
            if(flag==0){
                time++;
                ans[S.top()][2]=time;
                S.pop();
            }
        }
        lastcheck=1;
        for(i=1;i<=n;i++)if(color[i]==0){
            lastcheck=0;
            break;
        }
        if(lastcheck==0){
            S.push(i);
            time++;
            ans[i][1]=time;
            color[i]=1;
        }
    }
    
    
    for(i=1;i<=n;i++){
        printf("%d %d %d\n",i,ans[i][1],ans[i][2]);
    }
    return 0;
}