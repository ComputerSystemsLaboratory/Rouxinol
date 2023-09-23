#include <iostream>
using namespace std;

int main(){
  int n;
  while(cin>>n){
    int s=0;
    for(int i=0;i<600/n;i++) s +=i*i*n*n*n;
    cout<<s<<endl;
  }
  return 0;
}