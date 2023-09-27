#include <iostream>
using namespace std;

int involve3(int a){
  int flag=0;
  int tmp=a;
  while(1){
    if(tmp%10 == 3){
      flag=1;
      break;
    }
     tmp = tmp/10; 
     if(tmp==0) break;  
  }
return flag;
}

int main(){
  int num;
  int a=3;
  cin>>num;
  while(1){
    if(a>num) break;
    if(a%3==0){
      cout<<" "<<a;
    }else if(involve3(a)==1){
      cout<<" "<<a;
    }
    a+=1;
  }
  cout<<endl;
}