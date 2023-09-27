#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main(){
	string s;
	int q;
	
	cin >> s;
	cin >> q;
	
	for(int i=0; i<q; ++i){
		string od, p;
		int a, b;
		
		cin >> od >> a >> b;
		if(od=="replace"){
			cin >> p;
			s = s.replace(a, b-a+1, p);
		}
		else if(od=="print"){
			cout << s.substr(a, b-a+1) << endl;
		}
		else if(od=="reverse"){
			string tmp = s.substr(a, b-a+1);
			reverse(tmp.begin(), tmp.end());
			//cout <<"tmp=" << tmp <<endl;
			s = s.replace(a, b-a+1, tmp);	
		}
		
		//cout << s << endl;
		
	}
	return 0;
}