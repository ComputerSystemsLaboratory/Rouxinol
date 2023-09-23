#include<stdio.h>

int main(){

int n[11]={};
int m[11]={},p[11]={};
int N;
int P=0,M=0;
bool f=true;


scanf("%d",&N);
for(int j=0;j<N;j++)
{
for(int i=0;i<10;i++)
scanf("%d",&n[i]);

for(int i=0;i<10;i++){

	if(M==0){m[M]=n[i];M++;}
	else if(m[M-1]<n[i]&&M>0){M++;m[M]=n[i];}

	else if(P==0){p[P]=n[i];P++;}
	else if(p[P-1]<n[i]&&P>0){P++;p[P]=n[i];}
	
	
else f=false;
}


if(f==true)printf("YES\n");
else if(f==false)printf("NO\n");
//for(int i=0;i<10;i++)
//	printf("%d %d\n",m[i],p[i]);

for(int i=0;i<10;i++)
{p[i]=0;m[i]=0;}

bool f=true;
P=0,M=0;


}
return 0;
}