#include <iostream>
#define MAX 100

using namespace std;

void bubblesort(int a[], int n){
	/*int i,j;
	int flag;
	int temp;
	int count = 0;
	while(flag){
		flag = 0;
		for(i = 0 ; i < n-1 ; i++){
			if(a[i] > a[i+1]){
				temp = a[i];
				a[i] = a[i+1];
				a[i+1] = temp;
				flag = 1;
				count++;
	for(i = 0 ; i < n - 1 ; i++){
		cout << a[i] << " ";
	}
	cout << a[n-1] << endl;
			}
		}
	}
	for(i = 0 ; i < n - 1 ; i++){
		cout << a[i] << " ";
	}
	cout << a[n-1] << endl;

	cout << count <<  endl;*/
	int sw = 0;
	bool flag = 1;

	for(int i = 0 ; flag ; i++){
		flag = 0;
		for(int j = n - 1 ; j  >= i + 1 ; j--){
			if(a[j] < a[j-1]){
				swap(a[j],a[j-1]);
				flag = 1;
				sw++;
			}
		}
	}

	for(int i = 0 ; i < n - 1 ; i++){
		cout << a[i] << " ";
	}
	cout << a[n-1] << endl;

	cout << sw <<  endl;

}

int main(){
	int i;
	int n;
	int a[MAX];

	cin >> n;

	for(i = 0 ; i < n ; i++){
		cin >> a[i];
	}

	bubblesort(a,n);
}