#include <stdio.h>

int main(){
int n,min,max;
double sum = 0;
int val;
int n_memoly;


scanf("%d",&n);
n_memoly = n;
while(n != 0){

scanf("%d",&val);
if (n_memoly == n){
max = val;min = val;sum = val;
n--;
continue;
}
sum += val;
if (min > val){
min = val;
}
if (max < val){
max = val;
}
n--;
}

printf("%d %d %.0lf\n",min,max,sum);
return 0;
}