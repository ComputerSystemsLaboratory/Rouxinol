#include<bits/stdc++.h>
using namespace std;
int main(){

  int x,y,s;
  int max;
  int price1,price2;

  while(1){
    
    cin >>x>>y>>s;

    if(x==0 && y==0 && s==0)break;

    max=0;

    for(int i=1 ; i < s ; i++){
      for(int j=1 ; j < s ; j++){
	price1=i+i*x/100;
	price2=j+j*x/100;
	if(price1+price2 == s){
	  price1=i+i*y/100;
	  price2=j+j*y/100;
	  if(price1+price2 > max)max=price1+price2;
	}
      }
    }
    
    cout <<max<<endl;
    
  }
  
  return 0;
}