#include <stdio.h>
 
int main()
{
    int i;
    int a[6];
    int tmp;
    int o;
    for(i=0; i<6; i++)scanf("%d ", &a[i]);
    while((o=getchar())!='\n'){
        switch(o){
            case 'E':
                tmp=a[0];a[0]=a[3];a[3]=a[5];a[5]=a[2];a[2]=tmp;
                break;
            case 'N':
                tmp=a[0];a[0]=a[1];a[1]=a[5];a[5]=a[4];a[4]=tmp;
                break;
            case 'S':
                tmp=a[0];a[0]=a[4];a[4]=a[5];a[5]=a[1];a[1]=tmp;
                break;
            case 'W':
                tmp=a[0];a[0]=a[2];a[2]=a[5];a[5]=a[3];a[3]=tmp;
                break;
            default:break;
        }
    }
    printf("%d\n", a[0]);
    return 0;
}