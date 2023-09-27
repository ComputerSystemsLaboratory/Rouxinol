#include <iostream>
#include <vector>
using namespace std;


bool isPrime(int n){
	if(n == 1) return false;
	for(int i = 2;i*i <= n;i++)
		if(!(n%i)) return false;
	return true;
}


int main(){
	int a, d, n;
	while(cin >> a >> d >> n, a || d || n){
		vector<int> prime;
		for(int i = 0;(int)prime.size() < n;i++){
			int t = a + d*i;
			if(isPrime(t)) prime.push_back(t);
		}
		cout << prime.back() << endl;
	}

	return 0;
}