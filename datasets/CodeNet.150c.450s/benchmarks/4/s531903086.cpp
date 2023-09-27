#include <iostream>
using namespace std;

int main(){
	int m,f,r;
	int p[25565][3] = {0};
	int i = 0;
	do
	{
		cin >> p[i][0] >> p[i][1] >> p[i][2];
		i++;
	} while (p[i-1][0] != -1 || p[i-1][1] != -1 || p[i-1][2] != -1);
	for (int j = 0; j < i-1; ++j)
	{
		if (p[j][0] == -1 || p[j][1] == -1)
		{
			cout << "F";
		}else if ((p[j][0] + p[j][1]) >= 80)
		{
			cout << "A";
		}else if ((p[j][0] + p[j][1]) >= 65)
		{
			cout << "B";
		}else if ((p[j][0] + p[j][1]) >= 50)
		{
			cout << "C";
		}else if ((p[j][0] + p[j][1]) >= 30 && p[j][2] >= 50)
		{
			cout << "C";
		}else if ((p[j][0] + p[j][1]) >= 30 && p[j][2] < 50)
		{
			cout << "D";
		}else{
			cout << "F";
		}
		cout << endl;
	}
}