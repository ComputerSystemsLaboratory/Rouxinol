#include<cstdio>

int main(void){
    int w=0,h=0,x=0,y=0,r=0;
    
    scanf("%d%d%d%d%d",&w,&h,&x,&y,&r);
    int up=y+r;
    int down=y-r;
    int left=x-r;
    int right=x+r;
    
    if(up<=h){
        if(down>=0){
            if(left>=0){
                if(right<=w) {
                    printf("Yes\n"); return 0;
                }
            }
        }
    }
    printf("No\n");
    return 0;
    
}
