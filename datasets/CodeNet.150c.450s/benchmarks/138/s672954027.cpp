#include <stdio.h>

int main() {
 int a,b,c;

 scanf ("%d %d", &a, &b);
 
 if (b > a) {
	c = a;
	a = b;
	b = c;
}

 while (b != 0) {
  c = b;
  b = a%b;
  a = c;
 }
 
 printf("%d\n", a);
 return 0;

}