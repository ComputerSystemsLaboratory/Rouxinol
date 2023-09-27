#include <iostream>
#include <string>
#include <algorithm>
#include <set>

using namespace std;

int main(void)
{

	int m;
	string s;
	string str1,str2;

	set<string> lines;


	int i1,i2;

	cin >> m;

	for(i1=0;i1<m;i1++){
		cin >> s;
		lines.clear();


		for(i2=1;i2<s.length();i2++){

			str1 = s.substr(0,i2);
			str2 = s.substr(i2);

			lines.insert(str1+str2);
			lines.insert(str2+str1);

			reverse(str1.begin(),str1.end());

			lines.insert(str1+str2);
			lines.insert(str2+str1);

			reverse(str1.begin(),str1.end());
			reverse(str2.begin(),str2.end());

			lines.insert(str1+str2);
			lines.insert(str2+str1);

			reverse(str1.begin(),str1.end());

			lines.insert(str1+str2);
			lines.insert(str2+str1);

		}

		cout << (unsigned int)lines.size() << endl;
	}

	return 0;
}