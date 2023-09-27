#include <iostream>
#include <string>
#include <sstream>
using namespace std;
int main()
{
 string s;
 for(;;)
 {
	  getline(cin >> ws, s);
	  stringstream str(s);
	  int a, b;
	  char o;
	  str >> a >> o >> b;
	  
	  if(o == '+') cout << a + b << endl;
	  else if (o == '-') cout << a - b << endl;
	  else if (o == '*') cout << a * b << endl;
	  else if (o == '/') cout << a / b << endl;
	  else break;
 }
 return 0;
}