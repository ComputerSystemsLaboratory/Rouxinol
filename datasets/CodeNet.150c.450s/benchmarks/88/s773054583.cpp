#include <cstdio>
int h,w,s,t,m,min,ans;
int main(){
    while(1){
        scanf("%d%d", &h, &w);
        if(h==0&&w==0) break;
        min=h*h+w*w;
        ans=150*150;
        for(int i=1;i<=150;i++)
            for(int j=i+1;j<=150;j++){
                m = i*i+j*j;
                if(min<=m&&m<ans&&(i!=h||j!=w)){
                    if(min==m&&i<h)continue;
                    ans=m;
                    s=i;
                    t=j;
                }
            }
        printf("%d %d\n",s,t);
    }
    return 0;
}

