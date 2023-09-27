#include <cstdio>


int main(){
    int xflag = 0;
    int yflag = 0;
    int W,H,x,y,r;
    scanf("%d %d %d %d %d", &W, &H, &x, &y, &r);   
    int W_max = W - r;
    int H_max = H - r;
    if(x<=W_max && x>=r){
        xflag=1;
    }
    if(y<=H_max && y>=r){
        yflag=1;
    }

    if(xflag==1 && yflag==1){
        puts("Yes");
    }else{
        puts("No");
    }
    return 0;
}