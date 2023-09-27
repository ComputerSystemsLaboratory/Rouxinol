#include <iostream>

using namespace std;

int main(){
	string str, cmd, arg2;
	int n, arg0, arg1;

	cin >> str >> n;

	for(int i = 0; i < n; i++){
		cin >> cmd >> arg0 >> arg1;
		if(cmd == "print"){
			cout << str.substr(arg0, arg1-arg0+1) << endl;
			continue;
		}
		if(cmd == "reverse"){
			string tmp1 = str.substr(0, arg0);
			string rev  = str.substr(arg0, arg1-arg0+1);
			string tmp2 = str.substr(arg1+1, str.size()-arg1);
			char tmp;
			int revSize = rev.size();
			for(int i = 0; i < revSize/2; i++){
				tmp = rev[i];
				rev[i] = rev[revSize-i-1];
				rev[revSize-i-1] = tmp;
			}
			str = tmp1 + rev + tmp2;
		}
		if(cmd == "replace"){
			cin >> arg2;
			string tmp1 = str.substr(0, arg0);
			string tmp2 = str.substr(arg1+1, str.size()-arg1);
			str = tmp1 + arg2 + tmp2;
		}
	}
}