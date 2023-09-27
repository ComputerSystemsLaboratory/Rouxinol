#include <iostream>
#include <string>
using namespace std;

int main(){
int a,b;
string c;
cin >> a;
cin >> b;
if(a<b)
	c = "a < b";
if(a>b)
	c = "a > b";
if(a == b)
	c = "a == b";
cout << c << endl;
return 0;
}