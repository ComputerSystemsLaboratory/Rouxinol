#include <iostream>
using namespace std;
int main()
{

	int n, m;
	char cstr[100][2], str[1000000];

	cin >> n;

	while (n != 0){

		for (int i = 0; i < n; i++) cin >> cstr[i][0] >> cstr[i][1];

		cin >> m;

		for (int i = 0; i < m; i++){
			cin >> str[i];
			for (int j = 0; j < n; j++){
				if (str[i] == cstr[j][0]){
					str[i] = cstr[j][1];
					break;
				}
			}
		}

		for (int i = 0; i < m; i++) cout << str[i];

		cout << endl;

		cin >> n;

	}

}