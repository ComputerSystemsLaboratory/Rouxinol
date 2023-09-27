#include <iostream>
#include <stdio.h>
#include <string.h>
#include <functional>
#include <algorithm>
#include <string>

using namespace std;

int main (void)
{
	string str,E,ttt,kkk,lll,p,O;
	long q,a,b;

	cin >> str >> q;

	for (long s = 0; s < q; s++)
	{
		cin >> E >> a >> b;
		if (E == "print")
		{
			cout << str.substr(a,b - a + 1) << endl;
		}


		else if (E == "reverse")
		{
			/*ttt = str.substr(a,b - a + 1);
			kkk = str.substr(0,a);
			lll = str.substr(b - a + 1,str.size() - b - 1);

			reverse(ttt.begin(),ttt.end());
			str = kkk + ttt + lll;*/
			reverse(str.begin()+a,str.begin()+b+1);
		}


		else if (E == "replace")
		{cin >> p;
        str.replace(a,p.length(),p);


			/*cin >> p;

			O = p;
			kkk = str.substr(0,a);
			lll = str.substr(b - a + 1,str.size() - b - 1);

			str = kkk + O + lll;*/
		}

	}
}