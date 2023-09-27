#include <iostream>
#include <string>
using namespace std;

int main()
{
	string p, s;
	
	getline(cin, s);
	getline(cin, p);

	int a = 0;

	for (unsigned int i = 0; i < s.size(); i++){

		unsigned int j = 0;

		for (j = 0; j < p.size(); j++) {
			if (i + j < s.size()) {
				if ((p[j] != s[i + j]))
					break;
			}
			else if (p[j] != s[i + j - s.size()])
				break;
		}

		if (j == p.size()) {
			a = 1;
			break;
		}			
	}

	if (a == 1)
		cout << "Yes" << endl;
	else
		cout << "No" << endl;

    return 0;
}