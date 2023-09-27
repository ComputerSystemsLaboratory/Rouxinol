#include <iostream>
#include <string>
using namespace std;

int main(){
	
	while(1){
		string str, left, right;
		int m, h;

		cin>>str;
		if(str == "-") break;

		cin>>m;
		for(int i=0;i<m;i++){
			cin>>h;
			left  = str.substr(0, h);
			right = str.substr(h, str.length()-h);
			str = right + left;
		}

		cout<<str<<endl;
	}

	return 0;
}