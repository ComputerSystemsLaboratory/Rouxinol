#include<stdio.h>
#include<string.h>
 
void print(char str[1000], int a, int b) {
    char substr[1000];
    strncpy(substr, str + a, b - a + 1);
    substr[b - a + 1] = '\0';
    printf("%s\n", substr);
}
 
void reverse(char str[1000], int a, int b) {
    int i;
    char revstr[1000];
    strcpy(revstr, str);
    for (i = a;i <= b;i++) {
        revstr[i] = str[b + a - i];
    }
    strcpy(str, revstr);
}
 
void replace(char str[1000], int a, int b, char p[1000]) {
    int i;
    for (i = a;i <= b;i++) {
        str[i] = p[i - a];
    }
}
 
int main() {
    int i;
    int a, b, n;
    char str[1000], p[1000];
    char op[10];
     
    scanf("%s", str);
    scanf("%d", &n);
 
    for (i = 0;i < n;i++) {
        scanf("%s", op);
 
        if (strcmp(op, "print") == 0) {
            scanf("%d %d", &a, &b);
            print(str, a, b);
        }
        else if (strcmp(op, "reverse") == 0) {
            scanf("%d %d", &a, &b);
            reverse(str, a, b);
        }
        else if (strcmp(op, "replace") == 0) {
            scanf("%d %d %s", &a, &b, p);
            replace(str, a, b, p);
        }
    }
 
    return 0;
}