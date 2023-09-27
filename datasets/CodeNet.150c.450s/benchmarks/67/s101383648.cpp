/*
 * Q:自然数Nは何通りの連続する自然数の和で表せるか
 * A:Nの奇数の約数の個数-1
 * */
#include <iostream>
using namespace std;

bool solve(){
	int n;
	cin >> n;
	if(!n)	return false;
	int odd = 0;
	for(int i = 1; i < n; i++){
		if(n % i == 0){
			if((n / i) % 2 != 0)	odd++;
		}
	}
	cout << odd << endl;
	return true;
}

int main(void){
	while(solve());
  return 0;
}