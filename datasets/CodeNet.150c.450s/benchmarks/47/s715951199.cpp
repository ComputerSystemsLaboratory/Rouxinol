#include <stdio.h>

int main(){
    
    int W,H,x,y,r,e=1;
    
    scanf("%d %d %d %d %d",&W,&H,&x,&y,&r);
    
    e = (x-r>=0)?e:0;
    e = (y-r>=0)?e:0;
    e = (x+r<=W)?e:0;
    e = (y+r<=H)?e:0;
    
    printf("%s\n",(e)?"Yes":"No");
    
    return 0;
}