#include<iostream>
using namespace std;

int main(){
int a,b,n;
int m[17][17];
int x,y;
while(cin>>a>>b>>n){
for(int i=0;i<17;i++){
for(int j=0;j<17;j++){
if(i==0||j==0){m[i][j]=0;}
else m[i][j]=1;}}
for(int i=0;i<n;i++){
cin>>x>>y;
m[x][y]=0;}
for(int i=2;i<a+1;i++){if(m[i][1]!=0){m[i][1]=m[i-1][1];}}
for(int j=2;j<b+1;j++){if(m[1][j]!=0){m[1][j]=m[1][j-1];}}
for(int i=2;i<a+1;i++){
for(int j=2;j<b+1;j++){
if(m[i][j]!=0){m[i][j]=m[i][j-1]+m[i-1][j];}}}
cout<<m[a][b]<<endl;
}}