#include <stdio.h>
#include <string.h>

int main(void)
{
char str[256];
char rev[256];

scanf("%s", str);

for (int i = 0; str[i] != '\0'; i++){
rev[i] = str[strlen(str) - 1 - i];
}
rev[strlen(str)] = '\0';

printf("%s\n", rev);

return (0);
}