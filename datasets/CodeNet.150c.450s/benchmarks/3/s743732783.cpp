#include <iostream>
#include <string>
using namespace std;

int main(void){
	string str, instruction, temp;
	int a,b,q;

	cin >> str;
	cin >> q;

	for (int i = 0; i < q; i++){
		cin >> instruction >> a >> b;
		if (instruction == "replace"){
			cin >> temp;
			str.replace (a, (b-a)+1, temp);
		}
		else if (instruction == "reverse"){
			for (int i = a, j = b; i < ((a + b) / 2)+1; i++, j--){
				char temp = str[j];
				str[j] = str[i];
				str[i] = temp;
			}
		}
		else if (instruction == "print"){
			for (int i = a; i < b + 1; i++){
				cout << str[i];
			}
			cout << "\n";
		}
	}

	return 0;
}