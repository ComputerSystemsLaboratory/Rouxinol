#include <iostream>
#include <algorithm>
using namespace std;

int main(){
	int n, a[101], m = 0;
	fill(a, a+101, 0);
	for(int i = 0;cin >> n;i++){
		if(!n)break;
		a[n]++;
		if(a[n] > m)m = a[n];
	}
	for(int i = 0;i < 101;i++)if(a[i] == m)cout << i << endl;
	return 0; 
}