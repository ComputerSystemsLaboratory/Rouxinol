/*
 * stable sort check
 *
 */

#include <stdio.h>
#define MAX 36

typedef struct{
    char type;
    int number;
}Card;

int main(void){
    int n;
    scanf("%d", &n);

    int i, j, key_num, k;
    char c, key_type;
    Card card_b[n], card_s[n];
    for(i=0;i<n;i++){
        scanf(" %c%d", &c, &k);
        card_b[i].type = card_s[i].type = c;
        card_b[i].number = card_s[i].number = k;
    }

    //Bubble Sort Algo
    for(i=0; i<=n-1; i++){
        for(j=n-1; j>=i+1; j--){
            if(card_b[j].number < card_b[j-1].number){
                key_num = card_b[j].number;
                key_type = card_b[j].type;
                card_b[j].number = card_b[j-1].number;
                card_b[j].type = card_b[j-1].type;
                card_b[j-1].number = key_num;
                card_b[j-1].type = key_type;
            }
        }
    }

    for(i=0;i<n-1;i++){
        printf("%c%d ", card_b[i].type, card_b[i].number);
    }
    printf("%c%d\n", card_b[n-1].type, card_b[n-1].number);
    printf("Stable\n");
    

    int minj;
    //Selection Sort Algo
    for(i=0; i<=n-2; i++){
        minj = i;
        for(j=i; j<=n-1; j++){
            if(card_s[j].number < card_s[minj].number){
                minj = j;
            }
        }

        if(minj != i){
            key_num = card_s[i].number;
            key_type = card_s[i].type;
            card_s[i].number = card_s[minj].number;
            card_s[i].type = card_s[minj].type;
            card_s[minj].number = key_num;
            card_s[minj].type = key_type;
        }
    }

    int isStable = 1;
    for(i=0;i<n-1;i++){
        printf("%c%d ", card_s[i].type, card_s[i].number);
        if(card_s[i].type != card_b[i].type && card_s[i].number == card_b[i].number){
            isStable = 0;
        }
    }
    printf("%c%d\n", card_s[n-1].type, card_s[n-1].number);
    printf(isStable ? "Stable\n" : "Not stable\n");

    return 0;

}