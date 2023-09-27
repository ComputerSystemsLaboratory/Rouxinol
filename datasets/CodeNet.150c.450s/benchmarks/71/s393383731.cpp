#include<stdio.h>
#include<iostream>
#include<algorithm>
#include<string.h>
using namespace std;
int main(){
int i,n,j,l,e,g;
while(cin>>n){
g=0;
for(i=0;i<10;i++){
for(j=0;j<10;j++){
for(l=0;l<10;l++){
for(e=0;e<10;e++){
if(i+j+l+e==n)g++;
}
}
}
}
cout<<g<<endl;
}
return 0;
}