#include <iostream>
#include <string>
using namespace std;

int main(){
	int n;
	string str,ord,c;
	cin >> str;
	cin >> n;
	for(int i = 0;i < n;i++){
		int a,b;
		cin >> ord >> a >> b;
		int len = b-a;
		if(ord == "print"){
			cout << str.substr(a,len+1) << "\n";
		}
		else if(ord == "reverse"){
			string swap,swap2;
			swap = str.substr(a,len+1);
			for(int i = len;i >= 0;i--){
				swap2.push_back( swap.at(i) );
			}
			str = str.substr(0,a) + swap2 + str.substr(b+1);
		}
		else if(ord == "replace"){
			cin >> c;
			str = str.substr(0,a) + c + str.substr(b+1);
		}
	}
	
	return 0;
}