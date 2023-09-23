#include <stdio.h>
#include <math.h>
int trianglechecker(int x, int y, int z);
int main(void){
    int loop,len1,len2,len3,Len1,Len2,Len3;
    int f=0;
    scanf("%d", &loop);
    for(int i=0;i<loop;i++)
    {
        scanf("%d%d%d", &len1, &len2, &len3);
        f=trianglechecker(len1,len2,len3);
        if(f == 1)
        {
            printf("YES\n");
        }
        if(f == 0)
        {
            printf("NO\n");
        }
    }
    return 0;
}
int trianglechecker(int x, int y, int z)
{
    if(x * x == y * y + z * z){
        return 1;
    }
    if(y * y == x * x + z * z){
        return 1;
    }
    if(z * z == y * y + x * x){
        return 1;
    }
    return 0;
}