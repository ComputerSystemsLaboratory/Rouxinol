#include<iostream>
#include<algorithm>
#include <numeric>
using namespace std;

int main(){
	int n, p;

	while (cin >> n >> p, n + p){
		int a[1000] = { 0 };
		int i = 0;
		int b = p;

		while (true){
			if (b == 0){
				b = a[i];
				a[i] = 0;
			}
			else{
				b--;
				a[i]++;
			}
			if (a[i] == p){
				cout << i << endl;
				break;
			}
			i++;
			if (i == n) i = 0;

		}
	}
	return 0;
}