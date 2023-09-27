#include <iostream>
using namespace std;

void CompareAndPrint(int a, int b)
{
	if(a < b){
		cout << "a < b"  << endl;
	}else if(a == b){
		cout << "a == b" << endl;
	}else{
		cout << "a > b"  << endl;
	}
}

int main()
{
	int a, b;
	cin >> a >> b;
	CompareAndPrint(a, b);
	return 0;
}