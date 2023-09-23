#include<stdio.h>
int main(){
int p[101][101];
int n,m,x,w;
for(int i=0;i<101;i++){
for(int j=0;j<101;j++)
{p[i][j]=0;}}
w=0;
scanf("%d",&n);scanf("%d",&m);

for(int i=0;i<n;i++)
{
for(int j=0;j<m;j++)
{scanf("%d",&x);
p[i][j]=x;
p[i][m]+=x;
}
}

for(int ii=0;ii<n;ii++){
for(int jj=0;jj<=m;jj++){

if(jj<m){printf("%d ",p[ii][jj]);}

else if(jj==m){printf("%d\n",p[ii][m]);}

}
}
for(int j=0;j<m;j++){
for(int i=0;i<n;i++)
{
p[n][j]+=p[i][j];
}
printf("%d ",p[n][j]);
p[n][m]+=p[n][j];
}
printf("%d\n",p[n][m]);

return 0;
}