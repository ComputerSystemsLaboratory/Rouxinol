#include<iostream>
using namespace std;
int main(){
int price,cnt=0;
while(1){
cin>>price;
if(price==0)break;
price=1000-price;
if((price/500)!=0){
cnt+=(price/500);
price-=(price/500)*500;
}
if((price/100)!=0){
cnt+=(price/100);
price-=(price/100)*100;
}
if((price/50)!=0){
cnt+=(price/50);
price-=(price/50)*50;
}
if((price/10)!=0){
cnt+=(price/10);
price-=(price/10)*10;
}
if((price/5)!=0){
cnt+=(price/5);
price-=(price/5)*5;
}
if(price!=0){
cnt+=price;
price-=price;
}
cout<<cnt<<endl;
cnt=0;
}
return 0;
}