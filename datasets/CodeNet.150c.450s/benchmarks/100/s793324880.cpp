#include<iostream>
using namespace std;
 
long long factorial(long long n){   // 再帰関数
  if(n==1){
    return 1;
  }else{
    return n*=factorial(n-1);
  }
}
 
int main(){
  int n;
  cin >> n;
 
  if(n>=1 && n<=20){
    cout << factorial(n) << endl; // 再帰
  }
  else{
    cout << "計算できません。" << endl;
  }
 
  return 0;
}