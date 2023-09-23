#include<cstdio>

void swap(int *x,int *y)
{
    int temp;
    temp=*x;
    *x=*y;
    *y=temp;
}

int main()
{
    int a[1000],n;
    while(~scanf("%d",&n))
    {
        int len = 0;
        while(n--) scanf("%d",&a[len++]);
        int i,j,count=0;
        for(i=0;i<len-1;i++)
        {
            for(j=0;j<len-i-1;j++)
            {
                if(a[j]>a[j+1]){
                    swap(&a[j],&a[j+1]);
                count++;}
            }
        }
        for(i=0;i<len;i++) printf("%d%c",a[i],(i==len-1)?'\n':' ');
        printf("%d\n",count);
    }
    return 0;
}