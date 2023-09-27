  #include <iostream>
#include <string>
using namespace std;
int main(){
	string str;
	int i,j;
	cin >> str;
	string st="";
	for( i=str.size()-1; i>=0 ; i-- )
		st+=str[i] ;
	cout << st << endl;
}