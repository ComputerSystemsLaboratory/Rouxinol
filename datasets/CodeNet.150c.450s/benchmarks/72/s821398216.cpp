#include <stdio.h>
#include <string.h>

int main(){
    int i, len;
    char str[2048];
    fgets(str, sizeof(str), stdin);
    len = strlen(str);

    for (i = 0; i < len ; i++) {
        if (str[i] >= 'a' && str[i] <= 'z') {
            str[i] = str[i] - 0x20;
        } else if (str[i] >= 'A' && str[i] <= 'Z') {
            str[i] = str[i] + 0x20;
        } else {
            // 変換不要
        }
    }
    printf("%s", str);
    return 0;
}

