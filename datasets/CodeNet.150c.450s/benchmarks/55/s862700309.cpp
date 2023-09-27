#include<cstdio>
#include<cstring>

int main() {
    char digits[1000];

    while (1) {
        scanf("%s", digits);
        if (strcmp(digits, "0") == 0) break;

        int i = 0, sum = 0;
        while (digits[i]) {
            sum += (digits[i++] - '0');
        }
        printf("%d\n", sum);        
    }

    return 0;
}