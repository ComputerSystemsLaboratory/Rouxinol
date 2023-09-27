#include<iostream>
using namespace std;

int main() {
	int N;
	cin >> N;
	int p[N];
	int a;
	int k = 0;
	for (int i = 0;i < N;i++) 
		cin >> p[i];
	
	
	for (int j = 0;j < N;j++)
		for (int l = 0;l < N-1;l++)
			if (p[l] > p[l+1]) {
				a = p[l];
				p[l] = p[l +1];
				p[l + 1] = a;
				k++;
				}
				
			
	for (int i = 0;i < N;i++) {
		cout << p[i] ;
		if (i != N - 1)
			cout <<" ";

	}
	cout << endl;;
	cout << k << endl;

	return 0;
	
	

	
}
