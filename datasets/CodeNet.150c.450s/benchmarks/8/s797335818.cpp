#include <iostream>
#include <stdio.h>
#include <string.h>
using namespace std;

int main(void) {
    int N, diff, taroScore, hanakoScore;
    char taro[101], hanako[101];
    scanf("%d", &N);

    taroScore = 0; hanakoScore = 0;
    while(N-- > 0) {
        scanf("%s %s", taro, hanako);
        diff = strcmp(taro, hanako);
        if(diff == 0) taroScore++, hanakoScore++;
        if(diff > 0) taroScore += 3;
        if(diff < 0) hanakoScore += 3;
    }
    printf("%d %d\n", taroScore, hanakoScore);

    return 0;
}