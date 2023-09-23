#include<cstdio>
int main()
{
    int N,ba[10],B,C,ju;
    scanf("%d",&N);
    for(int i=0;i<N;i++)
    {
        ju=0;
        B=0;
        C=-1;
        for(int j=0;j<10;j++)
        {
            scanf("%d",&ba[j]);
        }
        for(int j=0;j<10;j++)
        {
            if(ba[j]>B&&ba[j]>C)
            {
                if(B>C)B=ba[j];
                else C=ba[j];
            }
            else if(ba[j]>B)B=ba[j];
            else if(ba[j]>C)C=ba[j];
            else ju++;
        }
        if(ju==0)printf("YES\n");
        if(ju>=1)printf("NO\n");
    }
    return 0;
}