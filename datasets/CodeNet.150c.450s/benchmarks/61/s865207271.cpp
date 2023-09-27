#include<stdio.h>
#include<iostream>
using namespace std;

int main(){

int N,A,B,X,C;
while(1){

cin>>N>>A>>B>>C>>X;
if(N==0&&A==0&&B==0&&C==0&&X==0)break;

int y[102]={};

for(int i=0;i<N;i++)
{
cin>>y[i];
}
int z[102]={};
int c=0;int d=(A*X+B)%C;
int h=0;d=X;bool f=true;
while(h<N){
	
	if(c>10000){c=-1;break;}
else if(d==y[h]&&f==true){z[h]=h;h++;f=false;}
else{f=true;
d=(A*d+B)%C;c++;
}
}/*
for(int i=0;i<N;i++)
{if(i>0)cout<<" ";
cout<<z[i];
}*/

cout<<c<<endl;
}
return  0;
}