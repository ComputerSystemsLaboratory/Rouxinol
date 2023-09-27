#include<iostream>
#include<string>
using namespace std;
#define REP(i,n) for(int i=0;i<(n);i++)

string in;
int j = 0;
int index = -1;

string c_1 = ".,!? " ;
string c_2 = "abc";
string c_3 = "def";
string c_4 = "ghi";
string c_5 = "jkl";
string c_6 = "mno";
string c_7 = "pqrs";
string c_8 = "tuv";
string c_9 = "wxyz";

char func(string s)
{
	while (in[j] != '0')
	{
		index++;
		if (index >= s.size())index = 0;
		j++;
	}
	return s[index];
}

int main()
{
	int n;
	cin >> n;
	cin.ignore();
	REP(i, n)
	{
		in.clear();
		getline(cin, in);
		j = 0;
		while (in[j] != '\0')
		{
			index = -1;
			switch (in[j])
			{
			case '1':
				cout << func(c_1);
				break;
			case '2':
				cout << func(c_2);
				break;
			case '3':
				cout << func(c_3);
				break;
			case '4':
				cout << func(c_4);
				break;
			case '5':
				cout << func(c_5);
				break;
			case '6':
				cout << func(c_6);
				break;
			case '7':
				cout << func(c_7);
				break;
			case '8':
				cout << func(c_8);
				break;
			case '9':
				cout << func(c_9);
				break;
		    }
			j++;
		}
		cout << endl;
	}
	return 0;
}