#include<iostream>
using namespace std;

int main(){
int n;
int a[6]={500,100,50,10,5,1};
while(cin>>n){
if(n==0)break;
n=1000-n;
for(int i=0;i<20;i++){
if(n==0){cout<<i<<endl; break;}
for(int j=0;j<6;j++){
if(n>=a[j]){n-=a[j]; break;}}}}}