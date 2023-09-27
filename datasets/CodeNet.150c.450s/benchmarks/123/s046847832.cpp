#include <iostream>
#include <math.h>
using namespace std;

bool isprime(int num)
{
      if(num == 2)return true;
      if(num % 2 == 0) return false;
      for(int j = 3; j < (int)sqrt(num) + 2 ;j += 2){
            if(num % j == 0)return false;
      }
      return true;
}
int main(){
      int count=0,tmp,n;
      cin >> n;
      for(int i = 0; i < n ; i++){
            cin >> tmp;
            if(isprime(tmp))count++;
      }
      cout<<count<<endl;
}