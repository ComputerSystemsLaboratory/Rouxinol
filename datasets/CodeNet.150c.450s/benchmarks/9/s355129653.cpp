#include <iostream>
#include <string>
using namespace std;

int main(){
	string s1 , s2;
	int m , h;
	while(1){
		cin>>s1;
		if(s1=="-") break;
		cin >> m;
		for(int i=0;i<m ; i++){
			cin>>h;
			s2=s1.substr(0,h);
			s1.erase(0,h);
			s1.append(s2);
		}
		cout << s1 << endl;
	}
	return 0;
}