#include <stdio.h>
long gcd_euclid(long m, long n) {
long temp;
while (n) {
temp = m % n;
m = n;
n = temp;
}
return m;
}
int main(){
long a, b;
long temp;
long gcd, lcm;
while(scanf("%ld %ld", &a, &b) != EOF){
gcd = gcd_euclid(a, b);
temp = a / gcd;
lcm = temp * b;
printf("%ld %ld\n", gcd, lcm);
}
return 0;
}