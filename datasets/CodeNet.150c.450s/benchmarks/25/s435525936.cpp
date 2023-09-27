#include <stdio.h>
#define Num 1001
int main () {
    char str[Num];
    int cou[100]={0};
    int i,j;
     
    //複数行に渡る文字列をload
    while (fgets (str,sizeof(str),stdin) != NULL) { //ctrl + d で抜ける
        for (i = 0;i < Num;i ++) { //read str[i]
            for (j = 0;j < 26;j ++) { //j=0 -> a
                if (str[i] - 'a' - j == 0 || str[i] - 'A' - j == 0) {
                    cou[j] ++;
                }
            }
            if (str[i] == '\0') { //after reading str
                break;
            }
        }
    }
    for (i = 0 ;i < 26;i ++) {
        printf ("%c : %d\n",'a' + i,cou[i]); //%c
    }
     
     
    return 0;
}
