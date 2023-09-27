#include<stdio.h>
char num1[10000000]={0},num11[10000000]={0},num2[10000000]={0},b[10000000]={0};
int main(void)
{
    int n1=0,n2=0;
    int i,j,k;
    while(scanf("%d",&n1)!=EOF)
    {
        if(n1==0)break;
        //fflush(stdin);
        getchar();
        for(i=0;i<n1;i++)
        {
            //fflush(stdin);
            //getchar();
            scanf("%[^\n]",b);
            num1[i]=b[0];
            num11[i]=b[2];
            b[0]='\0';b[1]='\0';b[2]='\0';
            //fflush(stdin);
            getchar();
        }
        //fflush(stdin);
        //printf("ok3\n");
        //getchar();
        scanf("%d",&n2);
        for(i=0;i<n2;i++)
        {
            //printf("ok4\n");
            //fflush(stdin);
            scanf("%s",b);
            num2[i]=b[0];
            b[0]='\0';
            //fflush(stdin);
            getchar();
        }
        for(i=0;i<n2;i++)
        {
            //printf("ng");
            if(num2[i]!=9999)
            {
                for(j=0;j<n1;j++)
                {
                    if(num2[i]==num1[j])
                    {
                        //printf("%c = %c\n",num2[i],num11[j]);
                        num2[i]=num11[j];
                        //printf("\n%c = %c\n",num2[i],num11[j]);
                        break;
                    }
                }
            }
        }
        //printf("%c\n",num2[3]);
        for(i=0;i<10000000;i++)
        {
            if(num2[i]!='\0')printf("%c",num2[i]);
            num1[i]='\0';
            num11[i]='\0';
            num2[i]='\0';
        }
        printf("\n");
    }
    return 0;
}