#include <iostream>
using namespace std;

int main(void)
{
	int n;
	int num[100];
	int i;
	
	cin >> n;
	
	for (i = 0; i < n; i++){
		cin >> num[i];
	}
	
	cout << num[i - 1];
	for (i -= 2;i >= 0; i--){
		cout << " " <<  num[i];
	}
	
	cout << endl;
	
	return (0);
}