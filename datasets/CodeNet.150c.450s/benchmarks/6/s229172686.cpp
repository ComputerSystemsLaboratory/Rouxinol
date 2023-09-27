#include<iostream>

using namespace std;

int main()
{
	int a = 0, b = 0, c = 0;
	
	cin >> a >> b >> c;
	
	if(a < c){
		if(a < b && b < c)
			cout << "Yes" << endl;
		else
			cout << "No" << endl;
	}
	else
		cout << "No" << endl;
	
	return 0;
}