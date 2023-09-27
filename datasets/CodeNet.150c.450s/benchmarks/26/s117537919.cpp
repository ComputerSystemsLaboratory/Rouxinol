#include <iostream>
#include <vector>
#include <sstream>
#include <string>
using namespace std;
int main()
{
	string str;
	string item;
	vector<string> list;
	getline(cin, str);

	stringstream ss(str);
	while (getline(ss, item, ' ') && !item.empty()) {
		list.push_back(item);
	}
	int a = stoi(list[0].c_str());
	int b = stoi(list[1].c_str());

	if (a > b)
	{
		cout << "a > b" << endl;
	}
	else if (a < b)
	{
		cout << "a < b" << endl;
	}else{
		cout << "a == b" << endl;
	}
	return 0;
}