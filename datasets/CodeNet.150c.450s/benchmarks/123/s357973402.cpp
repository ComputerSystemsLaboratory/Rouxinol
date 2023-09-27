#include<iostream>
#include<cmath>

using namespace std;

int isprime(int x){
	if(x == 2) return 1;
	if(x < 2 || x % 2 == 0) return 0;

	int i = 3;
	while(i <= sqrt(x)){
		if(x % i == 0) return 0;
		i += 2;
	}
	return 1;
}

int main(){
	int i, *k, n, judge, c = 0;
	
	cin >> n;
	k = new int[n];
	for(i = 0; i < n; i++){
		cin >> k[i];
		if((judge = isprime(k[i])) == 1) c++;
	}
	cout << c << endl;
	return 0;
}