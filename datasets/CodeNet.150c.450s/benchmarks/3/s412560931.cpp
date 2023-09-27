#include "iostream"
#include "string"
#include "algorithm"
using namespace std;

int main(int argc, char const *argv[])
{
	string str;
	int q=0;
	string sub1,sub4,rev;
	int sub2,sub3;
	cin >> str;
	cin >> q;

	for (int i = 0; i < q; ++i)
	{	
		cin >> sub1;
		if (sub1 == "print")
		{
			cin >> sub2 >> sub3;
			cout << str.substr(sub2, sub3-sub2+1) << endl;
		}
		else if (sub1 == "reverse")
		{
			cin >> sub2 >> sub3; 
			rev = str.substr(sub2, sub3-sub2+1); 
			reverse(rev.begin(), rev.end());
			str = str.replace(sub2, rev.size(), rev);
		}
		else if (sub1 == "replace")
		{
			cin >> sub2 >> sub3 >> sub4; 
			str = str.replace(sub2, sub3 - sub2 +1, sub4);
		}

	}
	return 0;
}

