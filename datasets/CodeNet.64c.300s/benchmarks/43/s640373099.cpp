#include<iostream>
#include<algorithm>

using namespace std;

int main(){

  int Ai,Am,As,Ae;
  int Bi,Bm,Bs,Be;

  int S,T;

  cin >> Ai >> Am >> As >> Ae >> Bi >>Bm >> Bs >> Be;

  S=Ai+Am+As+Ae;
  T=Bi+Bm+Bs+Be;

  if(S>=T){
    cout << S << endl;
  }
  else{
    cout << T << endl;
  }
  
  return 0;
}