#include<iostream>
using namespace std;

int main(){

  int N, n;
  bool flg = false;
  
  cin >> N;
  cout << N << ":";

  n = N;
  while(n != 1){

    flg = false;
    for(int i=2;i*i<=N;i++){
      if(n%i == 0){
	n /= i;
	cout << " " << i;
	flg = true;
	break;
      }
    }

    if(!flg){ cout << " " << n; n /= n; }
  }
  cout << endl;

}