#include <iostream>
#include <cmath>
using namespace std;

int main(){
  int a,d,n;

  while(cin>>a>>d>>n&&a|d|n!=0){
    int count=0;
    int prime=a;
    int cnt=0;
    while(count!=n){
      prime = a + d * cnt;
      if(prime==2||prime==3){
        count++;
      }else if(prime%2!=0&&prime>=5){
        for(int i=2;i<=(int)sqrt(prime);i++){
          if(prime%i==0) break;
          if(i==(int)sqrt(prime))count++;
        }
      }
      cnt++;
    }
    cout << prime << endl;
  }
  return 0;
}