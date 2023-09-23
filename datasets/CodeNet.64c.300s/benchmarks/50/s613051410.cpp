#include<iostream>
using namespace std;

void swp(int x,int y){
int tt,yy;
tt=x;yy=y;
x=yy;y=tt;

}
int main()
{

int N,k,f,tmp,r;
int num[101]={};
cin>>N;
f=1;tmp=0;r=0;
for(int i=0;i<N;i++)
{cin>>k;num[i]=k;}

while(f==1)
{
f=0;
for(int j=N-1;j>=1;j--)
{
if(num[j]<num[j-1]){r++;
tmp=num[j];num[j]=num[j-1];num[j-1]=tmp;f=1;}
;
}
}
for(int i=0;i<N-1;i++)
{cout<<num[i]<<" ";}
cout<<num[N-1]<<endl;
cout<<r<<endl;
return 0;
}