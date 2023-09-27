#include<iostream>
using namespace std;
int find_4combi(int n) {
	int cnt = 0;
	for(int i=0;i<=9999;i++) {
		int a[4];
		int ci = i;
		for(int j=0;j<4;j++) {
			a[j] = ci % 10;
			ci = ci / 10;
		}
		if(a[0]+a[1]+a[2]+a[3] == n)
			cnt++;
	}
	return cnt;
}
int main() {
	int n;
	while(cin >> n) {
		int ncombi = find_4combi(n);		
		cout << ncombi << endl;
	}
}