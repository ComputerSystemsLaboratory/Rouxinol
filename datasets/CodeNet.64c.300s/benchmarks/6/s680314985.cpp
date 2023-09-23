#include<stdio.h>
int main()
{
int p[4][3][10];
int n, r, g, f,v;

for(int i=0;i<4;i++)
for(int j=0;j<3;j++)
for(int k=0;k<10;k++)
p[i][j][k]=0;

scanf("%d",&n);
for(int ii=0;ii<n;ii++)
{
scanf("%d",&r);scanf("%d",&g);scanf("%d",&f);scanf("%d",&v);
p[r-1][g-1][f-1]+=v;
}
for(int iii=0;iii<4;iii++)
{
for(int jj=0;jj<3;jj++)
{
for(int kk=0;kk<10;kk++)

{
printf(" %d",p[iii][jj][kk]);
}
printf("\n");
}
if(iii<3)printf("####################\n");

}
return 0;
}