#include<stdio.h>
#include<iostream>
using namespace std;
int main(){
int card[20000],i,j,a=0,b=0,c=1,n;
cin>>n;
while(n!=0){
for(i=0;i<2*n;i++){
cin>>card[i];
}
for(i=0;i<2*n;i=i+2){
if(card[i]>card[c]){
a=a+card[i]+card[c];
}
else if (card[i]==card[c]){
a=a+card[i];
b=b+card[c];
}
else{
b=b+card[i]+card[c];
}
c=c+2;
}
cout<<a<<" "<<b<<endl;
c=1;
a=0;
b=0;
cin>>n;
}
return 0;
}