#include<iostream>
#include<string>

using namespace std;

int main() {
	string source;
	cin >> source;
	int count;
	cin >> count;
	for (int i = 0; i < count; i++) {
		string command;
		cin >> command;
		int start, end;
		if (command == "print") {
			cin >> start >> end;
			for (int j = 0; j < (end - start + 1); j++) {
				cout << source[start + j];
			}
			cout << endl;
		}
		else if (command == "reverse") {
			cin >> start >> end;
			for (int j = 0; j <= ((start + end) / 2-start); j++) {
				char temp;
				temp = source[end - j];
				source[end-j] = source[start + j];
				source[start + j] = temp;
			}
		}
		else if (command == "replace") {
			cin >> start >> end;
			string target;
			cin >> target;
			for (int j = 0; j < target.size(); j++) {
				source[start + j] = target[j];
			}
		}

	}

	return 0;
}