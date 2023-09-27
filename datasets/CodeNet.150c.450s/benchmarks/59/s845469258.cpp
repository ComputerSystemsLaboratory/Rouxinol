#include<iostream>
using namespace std;

int main() {
	int N;
	cin >> N;
	int p[N+1];
	p[0] = -100000;
	for (int i = 1;i < N+1;i++) {
		cin >> p[i];
	
	}
	

	
	for (int i = 1;i < N+1;i++) {
		int key = p[i];
		for (int j= 0;j <i ;j++) {

			if (p[j] <=key && key <= p[j + 1]) {
				for (int l = i-1; l >= j+1;l--)
					p[l + 1] = p[l];
				p[j + 1] = key;
				break;
			}
		}
	
		for (int k = 1;k < N + 1;k++) {
			cout << p[k] ;
			if(k !=N)
			cout << ' ';
		}
		
		
		cout << '\n';
	}
	
	
}
