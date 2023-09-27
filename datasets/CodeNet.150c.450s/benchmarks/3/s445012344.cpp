#include <iostream>
#include <string>
using namespace std;

string str;
string meirei;
int n; //命令数

void pri(int a, int b)
{
	while (a <= b)
	{
		cout << str[a];
		a++;
	}
	cout << endl;
}

void rep(int a, int b, string s)
{
	str.replace(a , (b - a + 1), s);
	//cout << str << endl;
}

void rev(int a, int b)
{
	string han;
	int aa = a, bb = b;
	while (b >= a)
	{
		han += str[b];
		b--;
	}
	
	str.replace(aa, (bb-aa+1), han);
	//cout << han << endl;
	//cout << str << endl;
}


int main()
{

	cin >> str;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> meirei;
		if (meirei == "replace"){
			int a, b;
			string s;
			cin >> a >> b >> s;
			rep(a, b, s);
		}
		else if (meirei == "reverse"){
			int a, b;
			cin >> a >> b;
			rev(a, b);
		}
		else if (meirei == "print"){
			int a, b;
			cin >> a >> b;
			pri(a, b);
		}
	}
	return 0;
}