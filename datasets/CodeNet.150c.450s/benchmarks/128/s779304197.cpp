#include <iostream>
#include <cstring>
using namespace std;

int main(void){
	char str[20];

    cin >> str;

	int n = strlen(str);

	for (int i = 0; i < (n / 2); i++){
		int tmp = str[i];
		str[i] = str[n - 1 - i];
		str[n - 1 - i] = tmp;
	}

	cout << str << endl;

	return 0;
}
