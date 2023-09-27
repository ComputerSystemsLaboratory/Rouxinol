#include<iostream>
using namespace std;
int main(){
  int A,B,ASUM=0,BSUM=0;
  for(int i=0;i<4;i++){
    cin >> A;
    ASUM+=A;
  }for(int i=0;i<4;i++){
    cin >> B;
    BSUM+=B;
  }
  if(A>=B)cout << ASUM << endl;
  if(A<B)cout << BSUM << endl;
  return 0;
}