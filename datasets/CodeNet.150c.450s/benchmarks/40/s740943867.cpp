#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main(){
	vector<int> dice(6);
	string str;
	for(auto &a: dice){
		cin >> a;
	}
	cin >> str;
	int top = 1,n = 5,e = 3,w = 4,s = 2;
	for(int i = 0; i < str.length(); i++){
		if(str[i] == 'S'){
			s = top;
			top = n;
			n = 7 - s;
		}else if(str[i] == 'E'){
			e = top;
			top = w;
			w = 7 - e;
		}else if(str[i] == 'W'){
			w = top;
			top = e;
			e = 7 - w;
		}else{
			n = top;
			top = s;
			s = 7 - n;
		}
	}
	cout << dice[top-1] << endl;
	return 0;
}	