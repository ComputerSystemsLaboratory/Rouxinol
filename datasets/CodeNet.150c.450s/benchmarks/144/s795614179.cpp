#include<stdio.h>
int main(){
int x,y,z,zz;
long w;
int p[100][100];
int q[100][100];
for(int i=0;i<100;i++){
for(int j=0;j<100;j++){
p[i][j]=0;
q[i][j]=0;

}}
scanf("%d",&x);scanf("%d",&y);scanf("%d",&z);
for(int i=0;i<x;i++){
for(int j=0;j<y;j++){
scanf("%d",&zz);p[i][j]=zz;
}}
for(int i=0;i<y;i++){
for(int j=0;j<z;j++){
scanf("%d",&zz);q[i][j]=zz;
}}
w=0;
for(int i=0;i<x;i++){
for(int j=0;j<z;j++){
for(int k=0;k<y;k++){
w+=p[i][k]*q[k][j];
}
if(j<z-1)printf("%ld ",w);
else if(j==z-1)printf("%ld\n",w);
w=0;
}
}
return 0;

}