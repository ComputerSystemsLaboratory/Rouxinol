#include <iostream>

using namespace std;

int main(void){
  int a,b;
  while(cin>>a){
    int digit=0;
    cin>>b;
    int sum=a+b;

    while(sum!=0){
      ++digit;
      sum/=10;
    }

    cout<<digit<<endl;
  }
  return 0;
}