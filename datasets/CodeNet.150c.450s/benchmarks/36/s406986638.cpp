#include <bits/stdc++.h>
#include <vector>
using namespace std;
long long n, d, hasil;
int main(){
	while(cin >> d){
		hasil = 0;
		for(int i = d; i <= 600-d; i += d){
			hasil += d * pow(i, 2);
		}
		cout << hasil << endl;
	}
	return 0;
}