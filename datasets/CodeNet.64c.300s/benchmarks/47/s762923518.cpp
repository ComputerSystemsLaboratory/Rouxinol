#include <iostream>

using namespace std;

int main(){
  int n[100],m,max=0;
  for(int i=0;i<100;i++){
    n[i] = 0;
  }
  while(cin>>m){
    n[m-1]++;
    if(max<n[m-1]){
      max++;
    }
  }
  for(int i=0;i<100;i++){
    if(n[i] == max)
      cout<<i+1<<endl;
  }
  
  return 0;
}