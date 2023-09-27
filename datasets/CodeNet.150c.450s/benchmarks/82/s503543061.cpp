#include<stdio.h>

int main(){
    int dice[6]={};
    for(int i=0;i<6;i++){
        scanf("%d",&dice[i]);
    }
    int q=0;
    scanf("%d",&q);
    int top,s;
    int dicepos[6][6]={{1,6,5,3,2,4},{2,5,1,3,6,4},{3,4,5,6,2,1},{4,3,5,1,2,6},{5,2,6,3,1,4},{6,1,5,4,2,3}};
    for(int i=0;i<q;i++){
        scanf("%d %d",&top,&s);
        for(int i=0;i<6;i++){
            if(dice[i]==top){
                top=i+1;
            }else if(dice[i]==s){
                s=i+1;
            }
        }
        for(int i=0;i<4;i++){
            if(dicepos[top-1][4]==s){
                printf("%d\n",dice[dicepos[top-1][3]-1]);
                break;
            }
            int temp=dicepos[top-1][2];
            dicepos[top-1][2]=dicepos[top-1][3];
            dicepos[top-1][3]=dicepos[top-1][4];
            dicepos[top-1][4]=dicepos[top-1][5];
            dicepos[top-1][5]=temp;
        }
    }
}

