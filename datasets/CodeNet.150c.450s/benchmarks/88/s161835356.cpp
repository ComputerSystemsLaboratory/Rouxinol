#include<stdio.h>

int main(){

int h,w;
while(1){
scanf("%d %d",&h,&w);if(h==0&&w==0)break;
int d=h*h+w*w;
int max=d+1;
int n[151][4]={};
for(int i=1;i<151;i++)
for(int j=i+1;j<151;j++){
	if(i*i+j*j==d&&i>h){n[i][0]=i*i+j*j;n[i][1]=i;n[i][2]=j;break;}
else if(i*i+j*j>d){n[i][0]=i*i+j*j;n[i][1]=i;n[i][2]=j;break;}
}
//printf("%d",n[4][0]);
for(int i=1;i<151;i++)
for(int j=150;j>i;j--)
if(n[j][0]<n[j-1][0]){
	int t=n[j-1][0];n[j-1][0]=n[j][0];n[j][0]=t;
	int tt=n[j-1][1];n[j-1][1]=n[j][1];n[j][1]=tt;
	int ttt=n[j-1][2];n[j-1][2]=n[j][2];n[j][2]=ttt;
}
for(int i=1;i<151;i++)
for(int j=150;j>i;j--)
if(n[j][0]==n[j-1][0]&&n[j][1]<n[j-1][1]){
	int t=n[j-1][0];n[j-1][0]=n[j][0];n[j][0]=t;
	int tt=n[j-1][1];n[j-1][1]=n[j][1];n[j][1]=tt;
	int ttt=n[j-1][2];n[j-1][2]=n[j][2];n[j][2]=ttt;
}


int xx=0,xxx=0;
for(int i=1;i<151;i++)
	if(n[i][0]!=0){xx=n[i][1];xxx=n[i][2];break;}
printf("%d %d\n",xx,xxx);
}
return 0;
}