#include <iostream>
#include <vector>
#include <string>
#include <cctype>
using namespace std;

int main(){
	string a;
	getline(cin, a);
	for (long i = 0; i < a.size(); i++){
		if (isupper(a[i])) a[i] = tolower(a[i]);
		else if (islower(a[i])) a[i] = toupper(a[i]);
	}
	cout << a << endl;

	return 0;
}