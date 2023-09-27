#include <stdio.h>
int main(void){
    while(1){
        int h, w, t;
        int mh, mw, mt = 150 * 150 *2;
        
        //データを読み込む
        scanf("%d %d", &h, &w);
        
        if(h == 0 && w == 0){
            break;
        }
        
        //対角線の長さの２乗を計算
        t = h * h + w * w;
        
        //考えられる高さと幅の組をすべて調べて、与えられたと長方形の対角線の長さを超える最小のせ長方形を見つける
        int i, j, at;
        for(i = 1; i <= 150; i++){
            for(j = 1; j <= 150; j++){
                if(i < j){
                    at = i*i+j*j;
                    if(t < at || (t == at && h < i)){
                        if(mt > at || (mt == at && mh > i)){
                            mt = at;
                            mh = i;
                            mw = j;
                        }
                    }
                }
            }
        }
        
        printf("%d %d\n", mh, mw);
    }
}

