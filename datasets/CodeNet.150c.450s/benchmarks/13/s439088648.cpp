#include <iostream>
#include <string>
using namespace std;

int main()
{
	//?????°???????????????
	string in;
	string sarch;
	int flag;

	//?????????s??¨?????????p?????????
	getline(cin, in);
	getline(cin, sarch);

	//s????????????????????????????????????
	in += in;

	//?????????s???????????????p???????´¢??????????????¨???
	if (in.find(sarch) != std::string::npos)
	{
		cout << "Yes" << endl;
	}
	else
	{
		cout << "No" << endl;
	}

	return 0;
}