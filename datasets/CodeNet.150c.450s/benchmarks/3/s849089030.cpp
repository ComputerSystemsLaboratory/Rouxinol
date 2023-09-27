
#include<iostream>
#include<string>

using namespace std;

int main(){

	int a, b, c;
	string str, command, s;

	cin >> str >> c;

	for (int i = 0; i < c;i++){

		cin >> command;

		if (command == "print"){
			cin >> a >> b;
			while (a <= b){
				cout << str[a];
				a++;
			}
			cout << endl;
		}
		else if (command == "replace"){
			cin >> a >> b >> s;
			str.replace(a, b - a + 1, s);
		}
		else{
			cin >> a >> b;
			for (int j = 0; j < (b - a + 1) / 2;j++){
				swap(str[a + j], str[b - j]);
			}
		}
	}

	return 0;
}
