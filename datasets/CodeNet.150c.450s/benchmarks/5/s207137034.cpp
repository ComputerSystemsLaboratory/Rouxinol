#include<iostream>
using namespace std;
int main()
{
	
	int a[200];
	int n;
	cin >> n;
	
	for (int i = 0; i < n; i++){
		cin >> a[i];
		
	}
	for (int i = n-1; i >= 0; i--){
		cout << a[i];
		if (i == 0){
			cout << endl;
		}
		else cout << " ";
	}






	return 0;
}