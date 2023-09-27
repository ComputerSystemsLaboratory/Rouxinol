#include<iostream>
using namespace std;
int main(){
int a[]={0,0,0,0,0,0,0,0,0,0};
int b;
while(cin>>b){
if(b==0){
cout<<a[0]<<endl;
for(int i=0;i<9;i++){
a[i]=a[i+1];}}
else{
for(int i=0;i<9;i++){
a[9-i]=a[8-i];}
a[0]=b;}}}