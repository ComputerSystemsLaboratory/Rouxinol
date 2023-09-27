#include <iostream>
#define LIST_MAX 1000
using namespace std;

struct test
{
	int tyukan;
	int kimatsu;
	int Tsuishi;
	char seiseki;
};

int main()
{
	test in[1000];
	int m, f, r;
	int count = 0;
	while (1)
	{
		cin >> m >> f >> r;
		if (m == -1 && f == -1 && r == -1)
		{
			break;
		}
		in[count].tyukan = m;
		in[count].kimatsu = f;
		in[count].Tsuishi = r;
		count++;
	}

	for (int i = 0; i < count; i++)
	{
		if (in[i].tyukan == -1 || in[i].kimatsu == -1)
		{
			in[i].seiseki = 'F';
		}
		else if (80 <= in[i].tyukan + in[i].kimatsu)
		{
			in[i].seiseki = 'A';
		}
		else if (65 <= in[i].tyukan + in[i].kimatsu && in[i].tyukan + in[i].kimatsu < 80)
		{
			in[i].seiseki = 'B';
		}
		else if (50 <= in[i].tyukan + in[i].kimatsu && in[i].tyukan + in[i].kimatsu < 65)
		{
			in[i].seiseki = 'C';
		}
		else if (30 <= in[i].tyukan + in[i].kimatsu && in[i].tyukan + in[i].kimatsu < 50)
		{
			if (50 <= in[i].Tsuishi)
			{
				in[i].seiseki = 'C';
			}
			else
			{
				in[i].seiseki = 'D';
			}
		}
		else if (in[i].tyukan + in[i].kimatsu < 30)
		{
			in[i].seiseki = 'F';
		}
	}
	for (int i = 0; i < count; i++)
	{
		cout << in[i].seiseki << endl;
	}
	return 0;
}