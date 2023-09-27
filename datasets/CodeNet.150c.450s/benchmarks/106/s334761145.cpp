#include <iostream>
#include <sstream>
#include <string>

#if defined SUBLIME
#  define ISTREAM ss
#else
#  define ISTREAM cin
#endif


using namespace std;
int main()
{
	#if defined SUBLIME
		string str = "5 14 80";
		stringstream ss;
		ss << str;
	#endif
	int a, b, c;
	int cnt = 0;
	ISTREAM >> a >> b >> c;
	for(int i = a; i <= b;i++)
	{
		if(c % i == 0){
			cnt++;
		}
	}
	cout << cnt << endl;
}