#include<iostream>
using namespace std;
#define T t[i][j]
#define r(i,h) for(int i=0;i<h;i++)
int main(){
int h,a;
while(cin>>h,h){
a=0;
int t[200][5]={{0},{0}};
r(i,h)r(j,5)cin>>T;
while(1){
bool f=1;
r(i,h){
int c=0,q=-1;
r(j,3){
if(T==t[i][j+1]&&T==t[i][j+2]&&T!=0){
c++;
if(q==-1)q=j;
}
}
if(c!=0){a+=t[i][q]*(2+c),f=0;r(j,2+c)t[i][q+j]=0;}
}
if(f)break;
for(int i=h-2;i>=0;i--){
r(j,5){
int x=i;
while(true){
if(x==h-1||t[x+1][j]!=0)break;
t[x+1][j]=t[x][j];
t[x][j]=0;
x++;
}
}
}
}
cout<<a<<endl;
}
return 0;
}