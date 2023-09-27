#include <stdio.h>

int f;
void judge(int x, int y, int z)
{    
    if (x * x + y * y == z * z){
        f = 1;
    }  
}


int main(void)
{
    int n, a, b, c;
    scanf("%d", &n);
    for (int i = 0; i < n ; ++i){
        f = 0;
        scanf("%d %d %d", &a, &b, &c); 
        judge (a, b, c); 
        judge (b, c, a); 
        judge (c, a, b);  
        if (f == 1){    
            printf("YES\n");
        }else{	
            printf("NO\n");
        }
    }
    return 0;        
}