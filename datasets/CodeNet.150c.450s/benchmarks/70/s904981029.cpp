#include <stdio.h>

static const char *days[7]=
{
    "Sunday",
    "Monday",
    "Tuesday",
    "Wednesday",
    "Thursday",
    "Friday",
    "Saturday",
    
};

int main(void)
{
    int base=4;
    int monthbase[12]=
    {0,3,4,0,2,5,0,3,6,1,4,6,};
    while(1)
    {
        int m,d;
        scanf("%d%d",&m,&d);
        if(m==0)
            break;
        puts(days[(base+monthbase[m-1]+d-1)%7]);
    }
    return 0;
}