#include<stdio.h>

int main(){
    
    int cases, term;
    scanf("%d %d", &cases, &term);
    int score[cases];
    for(int i = 0; i < cases; i++){
        scanf("%d", &score[i]);//terima input nilai
    }
    for(int i = term; i < cases; i++){
        if(score[i-term]<score[i])//jika lebih besar dari sebelumnya, maka ad perubahan
        {
            printf("Yes\n");
        }else//selain itu no
        {
            printf("No\n");
        }
    }
}