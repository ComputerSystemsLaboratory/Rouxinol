#include<cstdio>
int main()
{
    int mo,da;
    int cal[12]={0,31,29,31,30,31,30,31,31,30,31,30};
    while(scanf("%d%d",&mo,&da),mo)
    {
        int nu=0;
        for(int i=0;i<mo;i++)nu+=cal[i];
        nu+=da;
        if(nu%7==1)printf("Thursday\n");
        else if(nu%7==2)printf("Friday\n");
        else if(nu%7==3)printf("Saturday\n");
        else if(nu%7==4)printf("Sunday\n");
        else if(nu%7==5)printf("Monday\n");
        else if(nu%7==6)printf("Tuesday\n");
        else if(nu%7==0)printf("Wednesday\n");
    }
    return 0;
}