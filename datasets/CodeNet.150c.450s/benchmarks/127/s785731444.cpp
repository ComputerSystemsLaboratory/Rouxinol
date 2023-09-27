#include <iostream>
#include <string>
#include <algorithm>
#include <set>
using namespace std;


int main() {
	
	int n;
	cin >> n;
	for(int i=0;i<n;i++){
		
		set<string> ans;
		string str;
		cin >> str;
		for(int j=1;j<str.length();j++)
		{
			string a = str.substr(0,j);
			string b = str.substr(j,str.length()-j);
			string ra = a;
			reverse(ra.begin(),ra.end());
			string rb = b;
			reverse(rb.begin(),rb.end());
			
			ans.insert( a+b );
			ans.insert( ra+b );
			ans.insert( a+rb );
			ans.insert( ra+rb );

			ans.insert( b+a );
			ans.insert( rb+a );
			ans.insert( b+ra );
			ans.insert( rb+ra );
		}
		cout << ans.size() << endl;
	}

	// your code goes here
	return 0;
}