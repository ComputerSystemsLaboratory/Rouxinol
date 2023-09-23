#include <iostream>
#include <math.h>
using namespace std;

int main(){
  int n, a, i, tmp;
  int cnt = 0;

  cin>>n;

  while(cin>>a){
    if(a%2 != 0){
      tmp = 0;
      for(i = 2; i <= sqrt(a); i++){
        if((a%i) == 0) tmp++;
      }
      if(tmp == 0) cnt++;
    }else if(a == 2) cnt++;
  }

   cout<<cnt<<endl;
}