#include<iostream>
#include<algorithm>
using namespace std;
int i, j, n, a[100],v[100],l=0;
bool keisan(int,int);
int main() {
	int n,ans;
	bool bo;
	cin >> n;
	for (int i = 3; i <= n; i++) {
		bo=keisan(n,i);
		if (bo == true) {
			cout <<" "<< i;
		}
		else if (bo == false) {
			continue;
		}
	}
	cout << endl;
	return 0;
}
bool keisan(int n,int i) {
	int l,count=0,amari,last;
	while (1) {
		if (count == 0) {
			amari = i % 3;
		}
		last = i % 10;
		if (amari == 0 || last==3 || i == 3) {
			return true;
		}
		else if (amari != 0 && count==5) {
			return false;
		}
		else if (i != 3 && count < 5) {
			count++;
		}
		i/=10;
		
	}
}