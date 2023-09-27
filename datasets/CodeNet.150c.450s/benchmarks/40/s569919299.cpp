#include <iostream>
#include <cstdio>
#include <cstring>
#include <string>
using namespace std;

class Saikoro{
public:
	int me[6];
	void South();
	void North();
	void East();
	void West();
};

void Saikoro::South()
{
	int temp = me[5];
	me[5] = me[0];
	me[0] = me[4];
	me[4] = me[1];
	me[1] = temp;
}

void Saikoro::North()
{
	int temp = me[4];
	me[4] = me[0];
	me[0] = me[5];
	me[5] = me[1];
	me[1] = temp;
}

void Saikoro::West()
{
	int temp = me[3];
	me[3] = me[0];
	me[0] = me[2];
	me[2] = me[1];
	me[1] = temp;
}
void Saikoro::East()
{
	int temp = me[2];
	me[2] = me[0];
	me[0] = me[3];
	me[3] = me[1];
	me[1] = temp;
}

int main()
{
	Saikoro sai;
	cin >> sai.me[0] >> sai.me[5] >> sai.me[2] >> sai.me[3] >> sai.me[4] >> sai.me[1];
	string s;
	cin >> s;
	for (int i = 0; i < s.size(); i++)
	{
		if (s[i] == 'S')sai.South();
		if (s[i] == 'N')sai.North();
		if (s[i] == 'E')sai.East();
		if (s[i] == 'W')sai.West();
	}
	cout << sai.me[0] << endl;
	return 0;
}