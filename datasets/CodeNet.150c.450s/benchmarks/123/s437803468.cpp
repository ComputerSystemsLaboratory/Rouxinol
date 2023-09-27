#include <iostream>
#include <cmath>
using namespace std;

int main(){
  int n;
  int count = 0;
  cin>>n;
  for(int i=0;i<n;i++){
    int num;
    bool flag = false;
    cin>>num;
    for(int j = 2;j<=sqrt(num);j++){
      if(num%j==0){
	flag = true;
	break;
      }
    }
    if(!flag) count++;
  }
  cout<<count<<endl;
  return 0;
}