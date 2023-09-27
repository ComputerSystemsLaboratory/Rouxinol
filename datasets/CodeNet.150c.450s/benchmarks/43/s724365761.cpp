#include<iostream>
using namespace std;

int main(){
int n,a,b;
int sumA=0,sumB=0;
while(cin>>n){
	if(n==0)break;
	sumA=0,sumB=0;
for(int i=0;i<n;i++){
cin>>a>>b;
if(a>b){
sumA+=a;
sumA+=b;
}
if(a==b){
sumA+=a;
sumB+=b;
}
if(a<b){
sumB+=a;
sumB+=b;
}}
printf("%d %d\n",sumA,sumB);
}}