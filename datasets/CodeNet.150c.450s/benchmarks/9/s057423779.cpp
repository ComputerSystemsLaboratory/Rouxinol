#include<iostream>
#include<string>

using namespace std;

int main(){

	int m, h[100], j = 0;
	string s[10];

	while (true){

		cin >> s[j];
		if (s[j] == "-")break;
		cin >> m;
		for (int i = 0; i < m; i++){
			cin >> h[i];
		}

		for (int i = 0; i < m;i++){

			s[j] += s[j].substr(0, h[i]);
			s[j].erase(0, h[i]);
		}
		j++;
	}

	for (int i = 0; i < j;i++){
		cout << s[i] << endl;
	}

	return 0;
}
