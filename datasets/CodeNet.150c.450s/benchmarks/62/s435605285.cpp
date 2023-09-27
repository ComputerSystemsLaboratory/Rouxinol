#include<stdio.h>
int main (void)
{
int seisuu[3];

int x;

scanf("%d %d %d",&seisuu[0],&seisuu[1],&seisuu[2]);
 
 if(seisuu[0]>seisuu[1])
{x=seisuu[0];seisuu[0]=seisuu[1];seisuu[1]=x;}

if(seisuu[0]>seisuu[2])
{x=seisuu[0];seisuu[0]=seisuu[2];seisuu[2]=x;}

if(seisuu[1]>seisuu[2])
{x=seisuu[1];seisuu[1]=seisuu[2];seisuu[2]=x;}

printf("%d %d %d\n",seisuu[0],seisuu[1],seisuu[2]);

return 0;
}
