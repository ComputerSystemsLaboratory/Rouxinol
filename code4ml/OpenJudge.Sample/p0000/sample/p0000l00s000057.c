#include<stdio.h>
int main(void)
{
    int Mt[10],ranking[3],i;
    ranking[0]=0;
    ranking[1]=0;
    ranking[2]=0;
    scanf("%d%d%d%d%d%d%d%d%d%d",&Mt[0],&Mt[1],&Mt[2],&Mt[3],&Mt[4],&Mt[5],&Mt[6],&Mt[7],&Mt[8],&Mt[9]);
    for(i=0;i<10;i++)
    {
        if(ranking[0]<Mt[i])
        {
            ranking[2]=ranking[1];
            ranking[1]=ranking[0];
            ranking[0]=Mt[i];
        }
        else if(ranking[1]<Mt[i])
        {
            ranking[2]=ranking[1];
            ranking[1]=Mt[i];
        }
        else if(ranking[2]<Mt[i])
        {
            ranking[2]=Mt[i];
        }
    }
    printf("%d\n%d\n%d\n",ranking[0],ranking[1],ranking[2]);
    return 0;
}