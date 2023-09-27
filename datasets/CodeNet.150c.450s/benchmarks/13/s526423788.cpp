#include <iostream>
#include <string.h>
using namespace std;
int main(){
	int i , n ;
	string str , st , s ;
	cin >> str ;
	cin >> s ;
	st = str + str + str;
	n = st.find(s);
	if( n != -1 )
		cout <<"Yes" << endl;
	else 
		cout << "No" << endl;
}