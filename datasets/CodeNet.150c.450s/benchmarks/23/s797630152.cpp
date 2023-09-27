#include<iostream>
using namespace std;

long long F[100000] = {};
long long f(int);

int main(){
	int n;
	cin >> n;
	cout << f(n) << endl;
	//for(int i = 0;i<n;i++) cerr << f(i) << " ";
	//cerr << endl;
	return 0;
}

long long f(int k){
	if(F[k] != 0) return F[k];
	else if (k <= 1) return F[k] = 1;
	else{
		return F[k] = f(k-1) + f(k-2);
	}
}