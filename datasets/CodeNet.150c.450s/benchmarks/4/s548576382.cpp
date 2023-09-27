#include <iostream>
#include <string>

using namespace std;

int main()
{
	string grade;

	while (true)
	{
		int m, f, r;
		cin >> m >> f >> r;

		if (m == -1 && f == -1 && r == -1)
			break;

		if (m == -1 || f == -1 || m + f < 30)
			grade += "F";

		else if (m + f >= 80)
			grade += "A";

		else if (m + f >= 65)
			grade += "B";

		else if (m + f >= 50 || r >= 50)
			grade += "C";

		else if (m + f >= 30)
			grade += "D";
	}

	for (int i = 0; i < grade.size(); ++i)
		cout << grade[i] << endl;

	return 0;
}