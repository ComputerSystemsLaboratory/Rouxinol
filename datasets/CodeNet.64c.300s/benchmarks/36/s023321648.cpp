#include <stdio.h>
int main( void )
{
  int a, b, c;
  scanf("%d %d %d",&a, &b, &c);
  if( a<b && b<c ){printf("%d %d %d\n", a, b, c);}
if( a<c && c<b ){printf("%d %d %d\n", a, c, b);}
 if( b<a && a<c ){printf("%d %d %d\n", b, a, c);}
if( b<c && c<a ){printf("%d %d %d\n", b, c, a);}
if( c<a && a<b ){printf("%d %d %d\n", c, a, b);}
if( c<b && b<a ){printf("%d %d %d\n", c, b, a);}
 if( a==b && b<c  ){printf("%d %d %d\n", a, b, c);}
 if( a==c && c<b ){printf("%d %d %d\n", a, c, b);}
 if( a==b && b>c){printf("%d %d %d\n", c, a, b);}
 if( a==c&& b<a ){printf("%d %d %d\n",b, a, c );}
 if( c==b&& b<a ){printf("%d %d %d\n",b, c, a );}
 if( c==b&& b>a ){printf("%d %d %d\n", a, b, c);}
 if( a==b&&b==c ){printf("%d %d %d\n", a, b, c);}
 return 0;
}