#include <iostream>
#define N 100
using namespace std;

void printv(int a[], int k){
	int i;
	for(i=0;i<k-1;i++)
		cout << a[i] << " ";
	cout << a[k-1] << endl;
}

void insertionsort(int a[], int k){
	int i,j;

	for(i=1;i<k;i++){
		printv(a,k);
		int v = a[i];
		j = i - 1;

		while(j >= 0 && a[j] > v){
			a[j+1] = a[j];
			j--;
		}
		a[j+1] = v;
	}
	printv(a,k);

}

int main(){
	int i,n;
	int a[N];

	cin >> n;

	for(i=0;i<n;i++){
		cin >> a[i];
	}

	insertionsort(a,n);


}