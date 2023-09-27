 #include <stdio.h>
   
   int e;
   
   int x, y, z;
   int m;
   
   int main(void)
   {
      while(1) {
          m = 1000000;
          y = 0;
          z = 0;
          scanf("%d", &e);
          if (e == 0) break;
          while (z * z * z <= e) {
              while (y * y <= e - z * z * z) {
                  x = e - y * y - z * z * z;
                  if (m > x + y + z) {
                      m = x + y + z;
                  }
                  y++;
              }
              y = 0;
              z++;
          }
          printf("%d\n", m);
      }
  }
            