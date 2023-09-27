#include <iostream>
#include <stdio.h>
using namespace std;

int main(void) {
    int N, taroScore, hanakoScore;
    char *taroCards = new char[101];
    char *hanakoCards = new char[101];
    cin >> N;
    taroScore = 0; hanakoScore = 0;
    while(N-- > 0) {
        scanf("%s %s", taroCards, hanakoCards);
        while(true) {
            if(*taroCards > *hanakoCards) {
                taroScore += 3;
                break;
            }
            if(*taroCards < *hanakoCards) {
                hanakoScore += 3;
                break;
            }
            if(*taroCards == '\0' && *hanakoCards == '\0') {
                taroScore++;
                hanakoScore++;
                break;
            }

            if(*taroCards != '\0') taroCards++;
            if(*hanakoCards != '\0') hanakoCards++;
        }
    }

    printf("%d %d\n", taroScore, hanakoScore);

    return 0;
}