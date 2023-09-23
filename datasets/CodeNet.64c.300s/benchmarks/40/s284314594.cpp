
#include <iostream>
#include <string.h>
#include <string>
using namespace std;

int main()
{
	string a;
	getline(cin, a);
	for(int i = 0; i < ::strlen(a.c_str()); i++){
		if(isupper(a[i])){
			a[i] = ::tolower(a[i]);
		}
		else {
			a[i] = ::toupper(a[i]);
		}
	}
	cout << a << endl;

	return 0;
}