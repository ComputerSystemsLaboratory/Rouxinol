#include <iostream>
#include <string>

using namespace std;

int main()
{
	string str, action;
	int q;
	int i;
	int a, b;

	cin >> str;

	cin >> q;

	for (i = 0; i < q; i++){
		cin >> action;
		if (action == "print"){
			cin >> a >> b;
			for (int j = a; j <= b; j++){
				cout << str[j];
			}
			cout << endl;
		}
		else if (action == "reverse"){

			cin >> a >> b;

			string temp;

			int k = 0;

			for (int j = a; j <= b; j++){
				temp[k] = str[j];
				k++;
			}
			k = 0;
			for (int j = b; j >= a; j--){
				str[j] = temp[k];
				k++;
			}
		}
		else if (action == "replace"){
			cin >> a >> b;

			string str2;

			cin >> str2;

			int k = 0;

			for (int j = a; j <= b; j++){
				str[j] = str2[k];
				k++;
			}
		}
	}

	return 0;
}