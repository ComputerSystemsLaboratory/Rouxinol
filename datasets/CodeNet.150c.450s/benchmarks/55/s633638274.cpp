#include <iostream>
//#include <iomanip>
//#include <vector>
#include <string>
//#include <algorithm>

using namespace std;

int main(){

	string in;
	string end("0");
	int sum;

	while (1){
		getline(cin, in);
		if (in == end) break;

		sum = 0;
		for (int i = 0; i < in.size(); i++){
			sum += in[i] - 48;
		}

		cout << sum << endl;
	}


	return 0;
}