#include <stdio.h>
#include <string.h>
#define INF 100000
int main(void)
{
    char phone[10][6] = {"", ".,!? ", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};
    char message[3000];
    int buf;
    int t;
    int i, j;
     
    scanf("%d", &t);
     
    while (t--){
        scanf("%s", message);
        getchar();
         
        i = 0;
        while (message[i] != '\0'){
            buf = INF;
            j = 0;
            while ('0' <= message[i] && message[i] <= '9' && message[i] != '0' && message[i] != '\0'){
                buf = phone[message[i] - '0'][j % strlen(phone[message[i] - '0'])];
                j++;
                if (message[i + 1] != '0' && i + 1 < strlen(message) && message[i] != message[i + 1]){
                    j = 0;
                }
                i++;
            }
            if (!('0' <= message[i] && message[i] <= '9') || message[i] != '0'){
                buf = INF;
            }
            if (buf != INF){
                printf("%c", buf);
            }
            if (message[i] == '\0'){
                break;
            }
            i++;
        }
        printf("\n");
    }
     
    return (0);
}