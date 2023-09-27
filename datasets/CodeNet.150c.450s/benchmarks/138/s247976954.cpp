#include <stdio.h>
#include <algorithm>

int gcd(int, int);

int main(){
  int x, y, z;
  scanf("%d %d", &x, &y);
  z = gcd(x, y);

  printf("%d\n", z);
 
return 0;
}

int gcd(int x,int y){
    int r;  

    while (y > 0){
        r = x % y;
        x = y;
        y = r;
    }
    return x;
    
}