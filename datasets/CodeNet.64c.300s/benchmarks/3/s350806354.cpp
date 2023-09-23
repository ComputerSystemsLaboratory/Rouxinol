#include<iostream>
using namespace std;


int main()
{
	int n, count = 0;
	int a[101];
	cin >> n;
	for (int i = 0; i < n; i++){
		cin >> a[i];
		count++;
	}
	for (int i = 0; i < n; i++){
		cout << a[count - i - 1];
		if (i == n - 1){
			cout << endl;
		}
		else{
			cout << " ";
		}
	}
	return 0;
}