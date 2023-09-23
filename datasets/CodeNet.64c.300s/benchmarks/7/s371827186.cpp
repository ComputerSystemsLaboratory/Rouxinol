#include<stdio.h>


int main(){
    char chars[4] = {'S','H','C','D'};
    int clist[4][13];
    for(int i=0;i<4;i++){
        for(int j=0;j<13;j++){
                clist[i][j] = 0;
            }
        }
    int n,num;
    char c;
    scanf("%d",&n);
    for(int i=1;i <= n;i++){
        scanf("%c",&c);
        scanf("%c %d",&c,&num);
        if(c == 'S'){
            clist[0][num-1] = 1;
        } else if(c == 'H'){
            clist[1][num-1] = 1;
        } else if(c == 'C'){
            clist[2][num-1] = 1;
        } else if(c == 'D'){
            clist[3][num-1] = 1;
        }
    }
    for(int i=0;i<4;i++){
        for(int j=0;j<13;j++){
            if(clist[i][j] == 0){
                printf("%c %d\n",chars[i],j+1);
            }
        }
    }
}


