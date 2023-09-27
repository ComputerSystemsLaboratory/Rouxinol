#include<stdio.h>
#include<iostream>
using namespace std;

int main(){

int n,q;
int h1=0,m1=0,s1=0,h2=0,m2=0,s2=0;
while(1){
cin>>n;if(n==0)break;
long long int N[90800]={};
for(int i=0;i<n;i++)
{scanf("%d:%d:%d",&h1,&m1,&s1);
scanf("%d:%d:%d",&h2,&m2,&s2);
long int L1=h1*3600+m1*60+s1;
long int L2=h2*3600+m2*60+s2;
for(int j=L1;j<L2;j++)
	N[j]++;
}
int max=0;
for(int i=0;i<90800;i++)
{if(N[i]>max)max=N[i];}
cout<<max<<endl;
}
return 0;
}