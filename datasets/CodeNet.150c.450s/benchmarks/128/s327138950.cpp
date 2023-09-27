#include <iostream>
#include <string>
#include <algorithm>

using namespace std;
// cin >>
// cin <<
int main(){
	string a;
	getline(cin,a);
		reverse( a.begin() , a.end() );
		cout <<a<<endl;
	return 0;
}