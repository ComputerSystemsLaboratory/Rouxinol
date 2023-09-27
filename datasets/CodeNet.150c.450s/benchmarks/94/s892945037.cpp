#include <iostream>
using namespace std;

int main() {
	int N, count=0;
	const int MAX_N = 100;
	int a[MAX_N];
	
	cin >> N;
	for(int i=0; i<N; i++){
		cin >> a[i];
	}
	
	int tmp;
	for(int i=0; i<N-1; i++){
		for(int j=N-1; j>=i+1; j--){
			if(a[j-1]>a[j]){
				tmp = a[j];
				a[j] = a[j-1];
				a[j-1] = tmp;
				count++;
			}
		}
	}
	
	if(N==1){
		cout << a[0] <<endl;
		cout << 0 << endl;
		return 0;
	}
	
	for(int i=0; i<N-1; i++){
		cout << a[i] << " ";
	}
	cout << a[N-1] << endl;
	cout << count << endl;
}