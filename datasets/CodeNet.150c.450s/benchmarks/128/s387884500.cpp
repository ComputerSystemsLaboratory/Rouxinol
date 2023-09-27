#include <iostream>
#include <string>

using namespace std;

int main(){
	string in_str;
	string out_str;
	cin >> in_str;
	for(int i = in_str.size() - 1; i >= 0; i--){
		out_str += in_str[i];
	}
	cout << out_str << endl;
	return 0;
}