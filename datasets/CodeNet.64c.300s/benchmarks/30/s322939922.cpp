#include<iostream>
using namespace std;
int main(){
int price,cnt=0;
int div[6]={500,100,50,10,5,1};
int i;
while(1){
cin>>price;
if(price==0)break;
price=1000-price;
for(i=0;i<6;i++){
if((price/div[i])!=0){
cnt+=(price/div[i]);
price-=(price/div[i])*div[i];
}
}
cout<<cnt<<endl;
cnt=0;
}
return 0;
}