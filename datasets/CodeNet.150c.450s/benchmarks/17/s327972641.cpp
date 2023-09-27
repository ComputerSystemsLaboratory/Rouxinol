#include <iostream>
#include <algorithm>

using namespace std;

int main(int argc, char **argv)
{
	int a[5];
	
	cin >> a[0] >> a[1] >> a[2] >> a[3] >> a[4];
	
	sort(a, a+5);
	
	cout << a[4];
	for(int i = 3; i >= 0; i--){
		cout << " " << a[i];
	}
	cout << endl;
	
	return 0;
}