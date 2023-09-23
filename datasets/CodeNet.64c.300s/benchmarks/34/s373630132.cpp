#include <iostream>
using std::cin;
using std::cout;
using std::endl;

void print_a(int a[100], int n){
	for(int i = 0;i < n; i++){
		cout << a[i];
		if(i!=n-1)
			cout << " ";
		if(i==n-1)
			cout << endl;
	}
}

void insertion_sort(int a[100], int n){
	for(int i = 1; i < n; i++){
		print_a(a, n);	
		int v = a[i];
		int j = i - 1;
		while( j>= 0 && a[j] > v){
			a[j+1] = a[j];
			j--;
		}
		a[j+1] = v;
	}
	print_a(a, n);	
}

int main(){
	int a[100];
	int n;
	cin >> n;
	for(int i = 0;i < n;i++){
		cin >> a[i];
	}
	insertion_sort(a, n);
	
	return 0;
}