#include<iostream>
using namespace std;

int euclidean(int a, int b){
  if(a%b==0)
    return b;
  else
    return euclidean(b, a%b);
}
  int main(){  
  int a,b;
  cin >> a >> b;
  cout << euclidean(a,b) << endl;
  return 0;
  }