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

		if (m == -1 || f == -1 || m + f < 30) {
			grade += "F";
			continue;
		}
		else if (m + f >= 80) {
			grade += "A";
			continue;
		}
		else if (m + f >= 65) {
			grade += "B";
			continue;
		}
		else if (m + f >= 50 || r >= 50) {
			grade += "C";
			continue;
		}
		else if (m + f >= 30) {
			grade += "D";
			continue;
		}
	}

	for (int i = 0; i < grade.size(); ++i)
		cout << grade[i] << endl;

	return 0;
}