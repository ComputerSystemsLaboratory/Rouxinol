#include<iostream>
using namespace std;

void selectSort(int* a,int n){
	int trade = 0;
	int minI,v;
	for(int i = 0;i < n;i++){
		minI = i;
		for(int j = i + 1;j < n;j++){
			if(a[j] < a[minI]){
				minI = j;
			}
		}
		v = a[i];
		a[i] = a[minI];
		if(i != minI)
			trade++;
		a[minI] = v;
	}

	for(int i = 0; i < n;i++){
		cout << a[i] << flush;
		if(i != n - 1){
			cout << " " << flush;
		}else{
			cout << endl;
		}
	}
	cout << trade << endl;
}

int main(){
	int n;
	cin >> n;
	int* a = new int[n];
	for(int i = 0; i < n;i++){
		cin >> a[i];
	}
	selectSort(a,n);
}
