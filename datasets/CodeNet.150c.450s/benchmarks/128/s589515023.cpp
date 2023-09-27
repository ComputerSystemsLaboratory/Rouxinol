#include <iostream>
#include <string>
using namespace std;
int main(){
	string str;
	cin>>str;
	int A=str.size();
	for (int B=A-1;B>=0;B--)cout<<str[B];
	cout<<endl;
	return 0;
}