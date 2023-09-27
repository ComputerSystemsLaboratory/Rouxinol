#include <stdio.h>
#include <math.h>

int isprime(int);

int main(){
  int i,num,num2,sum=0,x;

  scanf("%d",&num);
  for(i=0;i<num;i++){
    scanf("%d",&num2);
      x=isprime(num2);
      if(x==1)sum+=1;
    }
      printf("%d\n",sum);

  return 0;
}



int isprime(int x){
int i =3;
    if (x == 2){
      return 1;
}

    if (x < 2 || x%2==0){
      return 0;
    }

    while (i <= sqrt(x)){
      if (x%i==0)return 0;

      i = i + 2;
}
   return 1;
}