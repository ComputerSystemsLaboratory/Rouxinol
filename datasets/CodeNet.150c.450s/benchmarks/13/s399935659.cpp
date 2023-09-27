#include <iostream>
#include <string>
using namespace std;
 
int main () {
	int a;
	string p,s;
	cin >> p >> s;
	p += p;

	a=p.find(s);
	if(a==-1)cout <<"No"<<endl;
	else cout << "Yes"<<endl;
}