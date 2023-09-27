#include <iostream>
//#include <iomanip>
//#include <vector>
#include <string>
//#include <algorithm>

using namespace std;

int main(){

	string in;

	getline(cin, in);

	for (int i = 0; i < in.size(); i++){
		if (isupper(in[i]) != 0)in[i] = tolower(in[i]);
		else if (islower(in[i]) != 0) in[i] = toupper(in[i]);
	}

	cout << in << endl;


	return 0;
}