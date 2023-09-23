#include <iostream>
#include <string>
#include <cmath>
#include<iomanip>
#include<algorithm>
#include<list>
using namespace std;

bool prime(int a){
	for (int i = 2; i <= sqrt(a); i++){
		if (a % i == 0){
			return false;
		}
	}

	return true;
}


int main()
{
	int n, count = 0;
	cin >> n;
	for (int i = 0; i < n; i++){
		int a;
		cin >> a;
		if (prime(a)){
			count++;
		}
	}
	cout << count << endl;
	
	return 0;
}