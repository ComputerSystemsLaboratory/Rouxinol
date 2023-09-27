#include <cstdio>
#include <cstring>

int main () {

    char num[1001];

    for ( ;; ) {
        scanf("%s", num);

        if (num[0] == '0') break;

        int sum = 0;
        int len = strlen(num);
        for ( int i = 0; i < len; i++ ) {
            //printf("%c %d\n", num[i], sum);
            sum += num[i] - '0';
        }
        printf("%d\n", sum);
    }

    return 0;
}