#include<iostream>
using namespace std;

void partition(int a[], int p, int r){
	int x = a[r];
	int i = p-1;
	for( int j=p; j<r; j++ ){
		if( a[j] <= x ){
			i++;
			int tmp = a[j];
			a[j] = a[i];
			a[i] = tmp;
		}
	}
	a[r] = a[i+1];
	a[i+1] = x;
	cout << a[0];
	for( int j=1; j<=i; j++ ){
		cout << " " << a[j];
	}
	cout << " [" << a[i+1] << "]";
	for( int j=i+2; j<=r; j++ ){
		cout << " " << a[j];
	}
	cout << endl;
}

int main(){
	int n, a[100001];
	cin >> n;
	for( int i=0; i<n; i++ )	cin >> a[i];
	partition( a, 0, n-1 );
	return 0;
}