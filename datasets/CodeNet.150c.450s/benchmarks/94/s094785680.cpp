#include <iostream>
using namespace std;

int bubbleSort(int* a,int n){
	bool isTraded = true;
	int trade = 0;
	while(isTraded){
		isTraded = false;
		for(int i = n - 1; i >= 1;i--){
			if(a[i - 1] > a[i]){
				int v = a[i];
				a[i] = a[i - 1];
				a[i - 1] = v;
			       isTraded = true;
			       trade++;
			}
		}
	}
	for(int i = 0;i < n;i++){
		cout << a[i] << flush;
		if(i != n - 1){
			cout << " " << flush;
		}else{
			cout << endl;
		}
	}
	return trade;

}

int main(){
	int n;
	cin >> n;
	int* a = new int[n];
	for(int i = 0;i < n;i++){
		cin >> a[i];
	}
	int trade = bubbleSort(a,n);
	cout << trade << endl;
}
