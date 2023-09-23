#include <stdio.h>

int main(void){
    
    int hight = 0;
    int width = 0;
    int x = 0;
    int y = 0;
    int r = 0;
    
    scanf("%d %d %d %d %d",&hight,&width,&x,&y,&r);
    
    bool isYes = true;
    
    if( (hight < (x+r)) || (width < (y+r)) || ((x-r) < 0) || ((y-r) < 0) ){
        isYes = false;
    }
    
    if(isYes != false){
        printf("Yes\n");
    }else{
        printf("No\n");
    }

    return 0;
}