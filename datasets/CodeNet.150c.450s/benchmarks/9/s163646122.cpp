#include <iostream>
#include <string>
using namespace std;

int main(){
	
	int time, h;
	string str, a, b;
	
	
	while(1){
		
		cin >> str;
		if(str == "-") break;
		
		cin >> time;
		
		
		for(int i = 0; i < time; ++i){
			cin >> h;
			
			a = str.substr(0, h);
			b = str.substr(h);
			str = b + a;
		}
		
		cout << str << endl;
	}
	
	return 0;
}