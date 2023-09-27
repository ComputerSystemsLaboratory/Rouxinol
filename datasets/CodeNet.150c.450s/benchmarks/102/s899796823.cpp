#include<stdio.h>
#include<iostream>
#include<string>
using namespace std;

int main(){

char N[21][21]={};
char L[21]={};

int W,H;
while(1){
cin>>W>>H;if(W==0&&H==0)break;


for(int i=0;i<H;i++){
scanf("%s",L);
for(int j=0;j<W;j++)
N[i][j]=L[j];
}

int n[22][22]={};int c=0;
for(int i=1;i<H+1;i++)
for(int j=1;j<W+1;j++)
{if(n[i][j]==0&&(N[i-1][j-1]=='@'||N[i-1][j-1]=='.')){c++;
n[i][j]=c;}
if(N[i-1][j-1]=='@'||N[i-1][j-1]=='.'){
if(N[i-1][j+1-1]=='@'||N[i-1][j+1-1]=='.')n[i][j+1]=n[i][j];
if(N[i+1-1][j-1]=='@'||N[i+1-1][j-1]=='.')n[i+1][j]=n[i][j];
}
}

for(int i=0;i<H+1;i++)
for(int j=0;j<W+1;j++)
{if(n[i][j]!=0&&n[i][j+1]>n[i][j]){
int t=n[i][j+1];
for(int ii=0;ii<H+1;ii++)
for(int jj=0;jj<W+1;jj++)
if(n[ii][jj]==t)n[ii][jj]=n[i][j];
}
if(n[i][j]!=0&&n[i][j-1]>n[i][j]){
int t=n[i][j-1];
for(int ii=0;ii<H+1;ii++)
for(int jj=0;jj<W+1;jj++)
if(n[ii][jj]==t)n[ii][jj]=n[i][j];
}
if(n[i][j]!=0&&n[i+1][j]>n[i][j]){
int t=n[i+1][j];
for(int ii=0;ii<H+1;ii++)
for(int jj=0;jj<W+1;jj++)
if(n[ii][jj]==t)n[ii][jj]=n[i][j];
}
if(n[i][j]!=0&&n[i-1][j]>n[i][j]){
int t=n[i-1][j];
for(int ii=0;ii<H+1;ii++)
for(int jj=0;jj<W+1;jj++)
if(n[ii][jj]==t)n[ii][jj]=n[i][j];
}
}

int p=0;
for(int i=0;i<H;i++)
for(int j=0;j<W;j++)
if(N[i][j]=='@')p=n[i+1][j+1];
/*
for(int i=1;i<H+2;i++){
for(int j=1;j<W+2;j++)
	cout<<n[i][j];
cout<<endl;
}*/

int g=0;
for(int i=1;i<H+1;i++)
for(int j=1;j<W+1;j++)
if(n[i][j]==p)g++;

cout<<g<<endl;
}

return 0;
}