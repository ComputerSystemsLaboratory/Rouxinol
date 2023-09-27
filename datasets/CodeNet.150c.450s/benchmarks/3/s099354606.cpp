#include <iostream>
#include <string>
using namespace std;

int main()
{
		int q, i, j, k, a, b;
		string str, opr, opt, tmp;
		cin >> str >> q;

		for (i=0; i<q; i++) {
				cin >> opr;
				if (opr=="print") {
						cin >> a >> b;
						cout << str.substr(a, b-a+1) << "\n";
				} else if (opr=="reverse") {
						cin >> a >> b;
						tmp = str.substr(a, b-a+1);
						k=tmp.size()-1;
						for (j=a; j<=b; j++) { 
								str[j] = tmp[k];
								k--;
						}
				} else if (opr=="replace") {
						cin >> a >> b >> opt;
						k=0;
						for (j=a; j<=b; j++) { 
								str[j] = opt[k];
								k++;
						}
				} else cout << "bad command\n";
		}
}