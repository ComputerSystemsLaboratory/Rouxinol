#include <stdio.h>

int main(void)
{
    int number, x, y, z, temp;
    scanf("%d", &number);
    for (int i = number; i > 0; i--){
        scanf("%d %d %d", &x, &y, &z);
        while (x > y || y > z){ //swap until x <= y <= z
            if(y > z){
                temp = y;
                y = z;
                z = temp;
            }
            if(x > y){
                temp = x;
                x = y;
                y = temp;
            }
        }
        if ((x * x) + (y * y) == (z * z)){
            printf("YES\n");
        }else{
            printf("NO\n");
        }
        
    }
    
    return 0;
}
        
    