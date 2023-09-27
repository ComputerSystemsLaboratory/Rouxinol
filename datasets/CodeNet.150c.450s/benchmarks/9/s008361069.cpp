#include <stdio.h>

int main(){
    char cards[200];
    char newCards[200];
    int m, cardsLen;
    //int h[100];
    int h;

    while(true) {
        scanf("%s",cards);
        if(cards[0] == '-') break;

        cardsLen = 0;
        while(cards[cardsLen] != '\0') cardsLen++;

        scanf("%d",&m);
        for(int i=0;i<m;i++){
            //scanf("%d",&h[i]);
            scanf("%d",&h);

            for(int j=0;j<cardsLen;j++){
                newCards[j] = cards[(j+h) % cardsLen];
            }
            
            for(int j=0;j<cardsLen;j++){
                cards[j] = newCards[j];
            }
        }

        printf("%s\n", cards);
        
    }

length:
    return 0;
}