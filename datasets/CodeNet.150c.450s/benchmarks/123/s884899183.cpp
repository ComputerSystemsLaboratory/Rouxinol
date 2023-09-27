#include<iostream>
using namespace std;

inline bool is_prime(int x){
  for(int j=2;j*j<=x;j++){
    if(x%j==0){
      return false;
    }
  }
  return x != 1;

}

int main(){
	int num;
  cin >> num;
  int input=0;
  int solve=0;
	for(int i=0;i<num;i++){
    cin >> input;
    if(is_prime(input))
      solve++;
  }
	cout << solve << endl;
	return 0;
}