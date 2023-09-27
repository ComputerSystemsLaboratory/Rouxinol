#include <iostream>
#include <string>
#include <map>
using namespace std;


int main(){
	int n;
	string a;
	string command;
	map<string,int> m;
	cin >> n;
	while(n--){
		cin >> command;
		if(command == "insert"){
			cin >> a;
			m.insert(map<string,int>::value_type(a,0));
		}else if(command == "find"){
			cin >> a;
			map<string,int>::iterator ma = m.find(a);
			if(ma != m.end()){
				cout << "yes"<<endl;
			}else{
				cout << "no"<<endl;
			}
		}
	}
	return 0;
}