#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <iterator>
using namespace std;
int main(){
	string str;
	cin>>str;
	reverse(str.begin(),str.end());
	cout<<str<<endl;
	int a;cin>>a;

	return 0;
}