#include<stdio.h>
#include<iostream>
using namespace std;

int main(){

int N,M;
int n[51]={};
int i=0,p=0;
while(1){
scanf("%d %d",&N,&M);
if(N==0&&M==0)break;
for(int k=0;k<51;k++)
	n[k]=0;

p=M;i=0;
while(n[i]!=M)
{
if(p==0&&n[i]>0){p=n[i];n[i]=0;}
//else if(p==0&&n[i]==0)
else if(p>0){p--;n[i]++;}
i++;i=i%N;
//if(i==N-1)i=0;
}
cout<<i<<endl;
}
return 0;
}