#include <iostream>
#include <vector>
using namespace std;

int main(){
	int x,y;cin>>x>>y;
  	int a,b;
  	if(x>=y){ a=x;b=y;}
  	else{ a=y;b=x;}
  	int c;
  while(true){
  	c=a%b;
  	if(c==0){
      cout<<b<<endl;
      break;
    }else{
    	a=b;
      	b=c;
    }
  }
}
