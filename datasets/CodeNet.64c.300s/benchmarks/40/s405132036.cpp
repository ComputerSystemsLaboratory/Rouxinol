#include<iostream>
using namespace std;

int main() {
	char str[1200];
	cin.getline(str, 1200);
	int i = 0;
	while (str[i] != NULL) {
		if ((int)str[i] >= 65 && (int)str[i] <= 90) {
			str[i] = str[i] + 32;
		}else if ((int)str[i] >= 97 && (int)str[i] <= 122) {
			str[i] = str[i] - 32;
		}
		i++;
	}
	for (int j = 0; str[j]!=NULL; j++) {
		cout << str[j];
	}
        cout << endl;
	return 0;
}