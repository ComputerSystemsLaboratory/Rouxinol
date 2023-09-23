#include <stdio.h>
#define MAX 1000000
int isPrime[MAX];
int main(){
int num;
int i, j;
int count;
// 配列の初期化
isPrime[0] = isPrime[1] = 0;
for(i = 2; i < MAX; i++){
isPrime[i] = 1;
}
// エラストテネスのふるい
for(i = 2; i * i < MAX; i++){
if(isPrime[i]){
// iの倍数は素数じゃないのでフラグ変更
for(j = 2 * i; j < MAX; j+=i){
isPrime[j] = 0;
}
}
}
while(scanf("%d", &num) != EOF){
count = 0;
while(num){
count += isPrime[num--];
}
printf("%d\n", count);
}
return 0;
}