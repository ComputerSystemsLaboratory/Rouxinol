#include <iostream>
#include <string>

using namespace std;

int main(int argc, char *argv[]){

	while(1){
		string inputstr;
		//getline(cin, inputstr);
		cin >> inputstr;
		if(inputstr == "-")break;
		int count;
		cin >> count;
		string s = inputstr;
		for(int i= 0; i< count; i++){
			int h;
			cin >> h;
			int len = s.length();
			s = s.substr(h , len - h) + s.substr(0, h);
		}
		cout << s << endl;
	}
	return 0;
}