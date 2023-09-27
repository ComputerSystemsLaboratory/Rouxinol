#include <stdio.h>

int main(void)
{
int a[5];

for (int i = 0; i < 5; i++){
scanf("%d", &a[i]);
}

for (int i = 0; i < 5; i++){
for (int j = i + 1; j < 5; j++){
if (a[i] < a[j]){
a[i] ^= a[j];
a[j] ^= a[i];
a[i] ^= a[j];
}
}
}

printf("%d", a[0]);
for (int i = 1; i < 5; i++){
printf(" %d", a[i]);
}
puts("");

return (0);
}