#include <iostream>
using namespace std;
int main(){
  long int a,b,c,d;
  cin>>a>>b>>c;
  for(int i=0;a+i<=b;i++){
    if(c%(a+i)==0){
      d+=1;
    }
  }
  cout<<d<<endl;
  return 0;
}