#include <iostream>
#include <iostream>
using namespace std;

int main(){
	string str;
	getline(cin,str);
	str += str;
    string check;
	getline(cin,check);
 	if(str.find(check) <= str.length()){
		cout << "Yes" << endl;
	}else{
		cout << "No" << endl;
	}	
	return 0;
}