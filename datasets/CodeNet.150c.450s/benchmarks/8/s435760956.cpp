#include <cstdio>
#include <cstring>

int main()
{
    int n;
    scanf("%d", &n);

    char taro[100], hanako[100];
    int score_taro = 0, score_hanako = 0;

    for(int i = 0; i < n; i++){
        scanf("%s", taro);
        scanf("%s", hanako);
        if(strcmp(taro, hanako) > 0) score_taro += 3;
        else if(strcmp(taro, hanako) < 0) score_hanako += 3;
        else {
            score_taro += 1;
            score_hanako += 1;
        }
    }

    printf("%d %d\n", score_taro, score_hanako);
    return 0;
}