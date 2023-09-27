#include <algorithm>
#include <string>
#include <iostream>
#include <sstream> // isstringstream
using namespace std;

int main(){
	int sum = 0;
	string w = "";
	string line = "";
	string word = "";

	cin >> w;
	while(1){
		getline(cin, line);
		if(line == "END_OF_TEXT")
			break;
		transform(line.begin(), line.end(), line.begin(), ::tolower);

		istringstream words(line);
		while(words >> word){
			if (word == w) ++sum;
		}
	}
	cout << sum << endl;

	return 0;
}