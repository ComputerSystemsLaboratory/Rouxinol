#include<iostream>
using namespace std;
int main(){
  int x,y,bet,les,ch;
  cin>>x>>y;
  if(x>=y){
    bet=x;les=y;
  }else{bet=y;les=x;}
  for(;;){
    ch=bet%les;
    if(ch==0){
      cout<<les<<endl;
      break;
    }
    if(les%ch==0){
      cout<<ch<<endl;
      break;
    }
    bet=les;
    les=ch;
  }
  return 0;
}