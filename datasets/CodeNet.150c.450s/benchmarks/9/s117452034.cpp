#include <iostream>
#include <string>
using namespace std;

int main(void){
	string str;
	int m, h, str_size;
	while(1){
		cin >>str;
		if(str=="-"){
			break;
		}
		str_size=str.size();
		cin >>m;
		for(int i=0; i<m; i++){
			cin >>h;
			str=str.insert(0, str.substr(h));
			str.erase(str_size);
		}
		cout <<str <<endl;
	}
    return 0;
}