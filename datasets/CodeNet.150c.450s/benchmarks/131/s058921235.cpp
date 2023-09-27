#include<stdio.h>
#include<iostream>
using namespace std;

int main(){


int L,a;
int r=0,q=0;
while(1){
scanf("%d %d",&a,&L);if(L==0&&a==0)break;
int x[7]={};int n[22]={};
n[0]=a;
for(int iii=1;iii<21;iii++){

	for(int j=0;j<L;j++)
	{x[j]=a%10;a=a/10;}

	for(int j=0;j<L;j++)
	{	for(int k=L-1;k>j;k--)
			if(x[k]>x[k-1]){int t=x[k];x[k]=x[k-1];x[k-1]=t;}
	}
	int max=0,min=0;
	for(int j=0;j<L;j++){min*=10;max*=10;
		max+=x[j];min+=x[L-j-1];
		
	}
	a=max-min;
	n[iii]=a;
}


for(int i=0;i<21;i++){
bool f=false;
for(int j=i+1;j<21;j++){
if(n[i]==n[j]){
	
	r=i;q=j;
		f=true;
		break;
}
}

if(f==true)break;
}

printf("%d %d %d\n",r,n[q],q-r);

}
return 0;
}