#include <iostream>

using namespace std;

int main(){
  int s,l[31]={0};
  for(int i=0;i<28;++i){
    cin>>s;++l[s];
  }
  for(int i=1;i<31;++i) if(!l[i]) cout<<i<<endl;
  return 0;
}