#include<iostream>
using namespace std;
#include<stdio.h>
int data[101];
void format(){
int i;
for(i=100;i--;){
data[i]=0;
}
}
int main(){
format();
int i;
while((scanf("%d",&i))!=EOF){
data[i]++;
if(data[0]<data[i]){
data[0]=data[i];
}
}
for(i=100;i--;){
if(data[100-i]==data[0]){
printf("%d\n",100-i);
}
}
return 0;
}