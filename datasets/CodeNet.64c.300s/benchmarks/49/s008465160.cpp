#include <iostream>
using namespace std;

int main(){
  int temp,temp2;
  while(cin>>temp>>temp2){
    int sum=temp+temp2;
    int keta=1;
    while(sum/10>0){
      sum/=10;
      keta++;
    }
    cout<<keta<<endl;
  }

  return 0;
}