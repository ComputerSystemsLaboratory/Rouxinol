#include<stdio.h>

int main(void){
int i,tate,yoko,a,b,temp ;
int array[] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30} ;

scanf("%d %d",&tate,&yoko);

for(i=0; i<yoko; i++){
scanf("%d,%d",&a,&b);
a--;//for array index
b--;//for array index
temp = array[a] ;//swap values
array[a] = array[b] ;
array[b] = temp ;
}

for(i=0; i<tate; i++){
printf("%d\n",array[i]);
}

return 0 ;
}