#include <bits/stdc++.h>
#include <vector>
using namespace std;
long long f(long long a){
	if(a == 0 || a == 1)
		return 1;
	else
		return a * f(a-1);
}
long long n;
int main(){
	cin >> n;
	cout << f(n) << "\n";
	
	return 0;
}