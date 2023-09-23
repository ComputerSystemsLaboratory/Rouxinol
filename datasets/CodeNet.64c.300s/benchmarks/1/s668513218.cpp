#include <bits/stdc++.h>
using namespace std;

int partition(int[], int, int);
int n;
int a[100001];

int main(){
	int q;
	
	cin >> n;
	
	for(int i = 0 ; i < n ; i++){
		cin >> a[i];
	}
	
	q = partition(a, 0, n-1);
	for(int i = 0 ; i < n ; i++){
		if(i){
			cout << " ";
		}
		if(i == q){
			cout << "[";
		}
		cout << a[i];
		if(i == q){
			cout << "]";
		}
	}
		
		cout << endl;
		
	return 0;
}

int partition(int a[], int p, int r){
	int x, i, j, t;
	int k;
	x = a[r];
	i = p - 1;
	for(j = p ; j < r ; j++){
		if(a[j] <= x){
			i++;
			k = a[i];
			a[i] = a[j];
			a[j] = k;
		}
	}
	
	k = a[i + 1];
	a[i + 1] = a[r];
	a[r] = k;
	
	return i + 1;
}