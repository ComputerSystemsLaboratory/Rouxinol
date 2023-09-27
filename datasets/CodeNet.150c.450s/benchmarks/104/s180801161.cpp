// 2011/06/04 Tazoe

#include <iostream>
#include <string>
#include <sstream>
using namespace std;

int main()
{
	int w;
	cin >> w;

	int amd[31];
	for(int i=1; i<=w; i++)
		amd[i] = i;

	int n;
	cin >> n;

	for(int i=0; i<n; i++){
		string str;
		cin >> str;

		for(int j=0; j<str.size(); j++)
			if(str[j]==',')
				str[j] = ' ';

		istringstream ist(str);
		int a, b;
		ist >> a >> b;

		int tmp = amd[a];
		amd[a] = amd[b];
		amd[b] = tmp;
	}

	for(int i=1; i<=w; i++)
		cout << amd[i] << endl;

	return 0;
}