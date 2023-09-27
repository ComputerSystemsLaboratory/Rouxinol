#include <iostream>
#include <set>
#include <string>
#include <algorithm> 
using namespace std;

int main(void){
	int n;
	cin >> n;
	while(n--){
		string s;
		cin >> s;
		set<string> ans;
		for(int i=1;i<s.size();i++){
			string a = s.substr(0,i);
			string b = s.substr(i);
			string ra=a,rb=b;
			reverse(ra.begin(), ra.end());
			reverse(rb.begin(), rb.end());
			ans.insert( a+ b);
			ans.insert( a+rb);
			ans.insert(ra+ b);
			ans.insert(ra+rb);
			ans.insert( b+ a);
			ans.insert( b+ra);
			ans.insert(rb+ a);
			ans.insert(rb+ra);
		}
		cout << ans.size()<<endl;
	}
	return 0;
}
