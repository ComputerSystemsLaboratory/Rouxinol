#include <iostream>
using namespace std;

void print_number(int a[], int N){
	
	if(N==1){
		cout << a[0] <<endl;
		return;
	}
	
	for(int i=0; i<N-1; i++){
		cout << a[i] << " ";
	}
	cout << a[N-1] << endl;
}


int main() {
	int N, count=0;
	const int MAX_N = 100;
	int a[MAX_N];
	
	cin >> N;
	for(int i=0; i<N; i++){
		cin >> a[i];
	}
	
	int tmp, mini;
	for(int i=0; i<N; i++){
		mini = i;
		for(int j=i; j<N; j++){
			if(a[mini] > a[j]){
				mini = j;
			}
		}
		if(mini != i){
			tmp = a[mini];
			a[mini] = a[i];
			a[i] = tmp;
			count++;
		}
	}
	
	
	print_number(a, N);
	cout << count << endl;
}