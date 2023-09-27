#include<stdio.h>
#include<iostream>
using namespace std;
struct JWE{bool f;int x;int y;};

int main(){
bool ma[22][22]={};
JWE JW[21];
int n1,n2,x1,y1,k,x=10,y=10;
char ch;

for(int i=0;i<22;i++)
for(int j=0;j<22;j++)
ma[i][j]=false;

while(scanf("%d",&n1)!=EOF){
	if(n1==0)break;
for(int i=0;i<n1;i++){
cin>>x1>>y1;
JW[i].x=x1;JW[i].y=y1;
}
x=10,y=10;
scanf("%d",&n2);
for(int ii=0;ii<n2;ii++){
cin>>ch>>k;

if(ch=='N'){
for(int j=y;j<=y+k;j++)
ma[x][j]=true;y=y+k;
}
else if(ch=='S'){
for(int j=y;j>=y-k;j--)
ma[x][j]=true;y=y-k;
}
else if(ch=='E'){
for(int j=x;j<=x+k;j++)
ma[j][y]=true;x=x+k;
}
else if(ch=='W'){
for(int j=x;j>=x-k;j--)
ma[j][y]=true;x=x-k;
}

}

int sum=0;
for(int i=0;i<n1;i++)
{if(ma[JW[i].x][JW[i].y]==true)sum++;}
if(n1==sum)printf("Yes\n");
else printf("No\n");

for(int i=0;i<22;i++)
for(int j=0;j<22;j++)
ma[i][j]=false;

/*
for(int i=0;i<21;i++){
for(int j=0;j<21;j++)
{cout<<" ";
if(ma[j][i]==false)cout<<"*";
else cout<<"1";}
cout<<endl;
}
*/
}
return 0;
}