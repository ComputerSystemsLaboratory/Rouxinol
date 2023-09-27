#include <iostream>
#include <algorithm>
using namespace std;

int SelectionSort(int a[],int n){
	int s = 0;
	for(int i = 0;i < n-1;i++){
		int minj = i;
		for(int j = i; j < n;j++){
			if(a[j] < a[minj]) minj = j;
		}
		swap(a[i],a[minj]); // int t = a[i];a[i]=minj;a[minj]=t;
		if(i != minj)s++; //s++;
	}
	return s;
}

int main(){
	int a[100] = {};
	int n,s;
	cin >> n;
	for(int i = 0;i < n;i++) cin >> a[i];

	s = SelectionSort(a,n);
	
	for(int i = 0;i < n;i++){
		if(i)cout << " ";
		cout << a[i];
	}
	cout << endl;
	cout << s << endl;

	return 0;
}
