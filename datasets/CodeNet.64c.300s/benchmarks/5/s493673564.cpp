#include<stdio.h>
int main(){
int i;
int height[10];
int temp, flag;
for(i = 0; i < 10; i++){
scanf("%d", &height[i]);
}
do{
flag = 0;
for(i = 0; i < 9; i++){
if(height[i] > height[i + 1]){
flag = 1;
temp = height[i + 1];
height[i + 1] = height[i];
height[i] = temp;
}
}
}while(flag);
printf("%d\n%d\n%d\n", height[9], height[8], height[7]);
return 0;
}