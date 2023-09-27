#include<iostream>
using namespace std;

int f[45];
int n;

int fibonacci(int n){
	
	cin >> n;
	f[0]=f[1]=1;

	for(int i=2;i<=n;i++){
		f[i]=f[i-1]+f[i-2];
	}
	return f[n];
}


int main(){
	cout << fibonacci(n) << "\n";
    return 0;
}