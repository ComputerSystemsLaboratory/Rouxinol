#include<iostream>
using namespace std;

int main(){
bool a[30];
for(int i=0;i<30;i++){
a[i]=true;}
int x;
for(int i=0;i<30;i++){
cin>>x;
a[x-1]=false;}
for(int i=0;i<30;i++){
if(a[i])cout<<i+1<<endl;}}