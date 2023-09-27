#include <stdio.h>
#include <stdbool.h> 

bool judge(int x, int y, int z)
{    
    bool flag = false;
    if (x * x + y * y == z * z){
        flag = true;
    } else if (y * y + z * z == x * x){
        flag = true;
    } else if (z * z + x * x == y * y){
        flag = true;
    }
    return flag;
}


int main(void)
{
    int repeat, a, b, c;
    scanf("%d", &repeat);
    for (int i = 0; i < repeat ; ++i){
        scanf("%d %d %d", &a, &b, &c); 
        bool flag = judge (a, b, c); 
        if (flag == true){    
            printf("YES\n");
        } else {	
            printf("NO\n");
        }
    }
    return 0;        
}