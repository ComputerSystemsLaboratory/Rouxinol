#include <iostream>
#include <iomanip>
#include <vector>

using namespace std;

int main(){

	int n,buf;
	vector <int> a;

	cin >> n;

	for (int i = 0; i < n; i++){
		cin >> buf;
		a.push_back(buf);
	}

	for (int i = n - 1; i > 0; i--){
		cout << a[i] << " ";
	}
	cout << a[0] << endl;


	return 0;
}