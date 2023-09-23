#include <bits/stdc++.h>
using namespace std;
#define lli long long int
#define N 44
lli F[N]={0};

lli fibonacci(int n){
	if(n==0 || n==1)return F[n] = 1;
	if(F[n]!=0)return F[n];
	return F[n] = fibonacci(n-2) + fibonacci(n-1);

}

int main(){
	int n;
	cin >> n;
	cout << fibonacci(n) << endl;
	return 0;
}