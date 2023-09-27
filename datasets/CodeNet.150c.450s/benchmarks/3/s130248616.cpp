#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int main(){
	string s;
	int n;
	cin >> s >> n;
	int a,b;
	string str,str2;
	for(int i = 0; i < n; i++){
		cin >> str >> a >> b;
		if(str == "print"){
			cout << s.substr(a,b+1-a) << endl;
		}else if(str == "reverse"){
			str2 = s.substr(a,b+1-a);
			reverse(str2.begin(),str2.end());
			s.replace(a,str2.length(),str2);
		}else{
			cin >> str2;
			s.replace(a,str2.length(),str2);
		}
	}
	return 0;
}		