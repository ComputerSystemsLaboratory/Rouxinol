#include<iostream>
#include<algorithm>
#include<functional>
using namespace std;

int F[100]; int N;

int main(){
  cin >> N;
  F[0] = 1;
  F[1] = 1;
  for(int i = 2; i < 45; ++i){
    F[i] = F[i-1] + F[i-2];
  }
  
  cout << F[N] << endl;
}

