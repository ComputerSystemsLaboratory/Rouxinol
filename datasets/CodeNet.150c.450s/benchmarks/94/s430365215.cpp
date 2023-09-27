// ahokusa.cpp
#include <iostream>
using namespace std;

void bubbleSort(int a[],int n){
	int cnt = 0;
	bool flag = 1;
	while(flag){
		flag = 0;
		for(int j=n-1;j>0;j--){
			if(a[j] < a[j-1]){
				swap(a[j],a[j-1]);
				cnt++;
				flag = 1;
			}
		}
	}
	for(int i=0;i<n;i++){
		if(i>0){cout << " ";}
		cout << a[i];
	}
	cout << endl << cnt << endl;
}
int main(){
	int n;
	int a[100];
	cin >> n;
	for(int i=0;i<n;i++){
		cin >> a[i];
	}
	bubbleSort(a,n);
	return 0;
}