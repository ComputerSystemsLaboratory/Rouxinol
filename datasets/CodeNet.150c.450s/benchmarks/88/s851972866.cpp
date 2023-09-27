#include <stdio.h>
#include <stdlib.h>

int main(){
    
    // 各種変数宣言
    
    int n,p,i,j,k,c,a; int count=0;
    
    // 配列宣言
    int cand[100],peb,diag,w1,h,w,min;
    
    // メインループ
    
    while(1){
      int h1=min=2147483647;
        
        // nとpを読み込む
        scanf(" %d", &h);
        scanf(" %d", &w);
        
        
        // 否定条件
        if( (h==0) && (w==0) ) break;
        
        diag=h*h + w*w;
       
        for(i=1;i<151;i++){
            for(j=i+1;j<151;j++){
                a=i*i + j*j;
                
                if(a>diag || (a==diag && i>h)){
                    if(a<min || (a==min && i<h1)){
                        min=a;
                        h1=i;
                        w1=j;
                    }
                    break;
                }
            }
            
        }
       
        printf("%d %1d\n",h1,w1);
    }
    // 終了
    return 0;
    
}

