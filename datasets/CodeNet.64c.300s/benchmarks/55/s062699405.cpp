#include<iostream>

using namespace std;

int main() {
	int count = 1;
	int x;
	while (cin>>x&&x != 0) {
		//cin >> x;
		cout << "Case " << count << ": " << x<<endl;
		count++;
	}



	//system("pause");
	return 0;
}