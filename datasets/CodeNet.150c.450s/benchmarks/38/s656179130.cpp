#include<stdio.h>
#include<math.h>
void hidariokiku(int *hidari, int *migi);
//this file is not a C file but a C++ file                                      

int main(void){
    int inpnum;//最初の数字の記憶                                               
    int a,b,c;//辺の長さを記憶                                                  

    for(scanf("%d", &inpnum); inpnum != 0; inpnum -= 1) {
        scanf(" %d %d %d", &a, &b, &c);
        //a > b > cの形に持っていく                                             
        hidariokiku(&a, &b);
        hidariokiku(&b, &c);
        hidariokiku(&a, &b);
        //判定                                                                  
        if(pow(a, 2) == pow(b, 2) + pow(c, 2)) {
            printf("YES\n");
        }else{
            printf("NO\n");
        }
    }
    return 0;
}

void hidariokiku(int *hidari, int *migi) {
  int space;
    if(*hidari < *migi) {
        space = *hidari;
        *hidari = *migi;
        *migi = space;
    }
}