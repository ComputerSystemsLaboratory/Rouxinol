#include <iostream>
#include <string>
#include <list>
#include <algorithm>
#include <map>
using namespace std;

#define D

#ifdef D
void fncPrint(string& str) {
	int a, b;
	cin >> a >> b;
	cout << str.substr(a, 1 + b - a) << endl;
}
void fucreverse(string& str) {
	int a, b;
	cin >> a >> b;
	string::iterator it = str.begin();
	reverse(it + a,it + b+1);
}
void fucReplace(string & str) {
	int a, b;
	string p;
	cin >> a >> b >> p;
	str = str.substr(0,a) + p + str.substr(b+1,-1);
}
class mach {
public:
	mach() {
		arr.insert(make_pair("print", fncPrint));
		arr.insert(make_pair("reverse", fucreverse));
		arr.insert(make_pair("replace", fucReplace));

	}
public:
	void swichoder(string & oder,string& str) {
		it = arr.find(oder);
		if (it != arr.end())
			it->second(str);

	}
private:
	typedef 	map<string, void(*)(string&)> func_type;
	func_type	arr;
	func_type::iterator it;
};
mach ma;


int main(void)
{
	string str;
	cin >> str;
	int n;
	cin >> n;
	string oder;
	for (size_t i = 0; i < n; i++)
	{
		cin >> oder;
		ma.swichoder(oder,str);
	}

	return 0;
}
#endif // D