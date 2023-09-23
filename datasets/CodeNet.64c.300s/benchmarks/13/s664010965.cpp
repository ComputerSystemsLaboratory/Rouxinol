#include <iostream>
using namespace std;
long long fibo(int n){
    int F[n];
    F[0] = F[1] = 1;
	for(int i = 2; i <= n; i++)
        F[i] = F[i-1]+F[i-2];
	return F[n];
}

int main(void){
    int n;
	cin >> n;
	cout << fibo(n) << endl;
	return 0;
}

