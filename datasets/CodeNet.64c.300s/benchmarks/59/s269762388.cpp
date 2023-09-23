#include<iostream>
using namespace std;
#include<cmath>

bool isPrime(int x){
	if(x == 2)return true;

	if(x % 2 == 0)return false;

	int i = 3;
	while(i <= sqrt(x)){
		if(x % i == 0)return false;
		i++;
	}

	return true;
}

int main(){
	int i,N;
	int Num = 0;

	cin >> N;
	for(i = 0; i < N; i++){
		int tmp;
		cin >> tmp;
		if(isPrime(tmp))Num++;
	}

	cout << Num << endl;

	return 0;
}
