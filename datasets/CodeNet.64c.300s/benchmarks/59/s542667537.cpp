#include <iostream>
using namespace std;
bool is_prime(int a)
{
	int n = 2;
	while(n*n <= a){
		if(a%n == 0) return false;
		n ++;
	}
	return true;
}

int main(int argc, char const *argv[])
{
	int n = 0 ;
	cin >> n;
	int count = 0;
	for(int i = 0; i < n ; i ++){
		int a = 0;
		cin >> a ;
		if(is_prime(a)) count ++;
	}
	cout << count << endl;
	return 0;
}