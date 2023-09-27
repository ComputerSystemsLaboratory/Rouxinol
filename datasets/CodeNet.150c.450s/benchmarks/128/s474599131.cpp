#include<iostream>

using namespace std;

int main() {
	string a= "";
	cin >> a;

	for(int j = (int)a.size()-1;j>=0;j--){
		cout << a.substr(j, 1);
	}
	cout << endl;


	return 0;
}

