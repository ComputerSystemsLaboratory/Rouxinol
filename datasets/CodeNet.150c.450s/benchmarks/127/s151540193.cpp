#include <iostream>
#include <map>
#include <algorithm>
#include <string>
using namespace std;

int main() {
	// your code goes here
	
	int n;
	cin>>n;
	for(int qq=0;qq<n;qq++){
		string s;
		cin>>s;
		map<string,int> ma;
		int l=s.length();
		for(int i=1;i<l;i++){
			string a1=s.substr(0,i);
			string b1=s.substr(i,l-i);
			string a2=a1,b2=b1;
			reverse(a2.begin(), a2.end());
			reverse(b2.begin(), b2.end());
		//	cout<<a1<<" "<<a2<<" "<<b1<<" "<<b2<<" "<<endl;;
		ma.insert(make_pair(a1+b1, 5));
		ma.insert(make_pair(a1+b2, 5));
		ma.insert(make_pair(a2+b1, 5));
		ma.insert(make_pair(a2+b2, 5));
		ma.insert(make_pair(b1+a2, 5));
		ma.insert(make_pair(b1+a1, 5));
		ma.insert(make_pair(b2+a2, 5));
		ma.insert(make_pair(b2+a1, 5));
		}
		cout<<ma.size()<<endl;
	}
	
	
	return 0;
}