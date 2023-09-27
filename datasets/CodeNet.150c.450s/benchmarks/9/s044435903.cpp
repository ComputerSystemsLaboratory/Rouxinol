#include <iostream>
#include <string>

using namespace std;

int main(void)
{	

	
	while (true)
	{   
		string sub = "";
		cin >> sub;
		int num, sh;
		if (sub == "-")
			break;
		cin >> num;
		
		for (int i = 0; i < num; i++)
		{
			cin >> sh;
			string t = sub.substr(sh);
			t += sub.substr(0,sh);
			sub = t;

		}

		cout << sub << endl;
	}

}