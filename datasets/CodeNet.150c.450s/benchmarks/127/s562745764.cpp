#include <iostream>
#include <string>
#include <vector>
#include <set>

using namespace std;

int main(){
	int n;
	cin >> n;
	for(int i=0;i<n;i++){
		string str;
		cin >> str;
		set<string> s;
		for(int i=1;i<(signed)str.size();i++){
			string s1 = str.substr(0,i);
			string s2 = str.substr(i);
			string s3 = string(s1.rbegin(),s1.rend());
			string s4 = string(s2.rbegin(),s2.rend());
			s.insert(s1+s2);
			s.insert(s3+s4);
			s.insert(s1+s4);
			s.insert(s3+s2);
			s.insert(s2+s1);
			s.insert(s4+s3);
			s.insert(s4+s1);
			s.insert(s2+s3);
		}
		cout << s.size() << endl;
	}
}