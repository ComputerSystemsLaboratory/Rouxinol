#include <iostream>
#include <string>
using namespace std;

int main() {
	string str1;
	cin>>str1;
	int l = str1.size();
	for(int i=l-1; i>=0; i--){
		cout<<str1[i];
	}
	cout<<endl;
	return 0;
}