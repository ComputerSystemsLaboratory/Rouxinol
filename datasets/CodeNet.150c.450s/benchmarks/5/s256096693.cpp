#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main () {

	int n;
	vector<int> values;

	cin >> n;
	cin.ignore();

	for (int i = 1; i <= n; i++){
		string tmp_value;
		
		if(i == n)
			getline(cin, tmp_value);
		else
			getline(cin, tmp_value, ' ');

		values.push_back(stoi(tmp_value));
	}
	
	for (int i = n; i != 0; i--){
		
		if (i == 1)
			cout << values[i - 1] << endl;
		else
			cout << values[i - 1] << ' ';
	}

	return 0;
}


