#include <iostream>
using namespace std;

int main(void){
		int n;
		cin >> n;
		double *a = new double[n];
		for(int i = 0;i < n;i++){
				cin >> a[i];
		}
		for(int j = 0;j < n-1;j++){
				cout << a[n-1-j] << " ";
		}
		cout << a[0] << endl;
		return 0;
}