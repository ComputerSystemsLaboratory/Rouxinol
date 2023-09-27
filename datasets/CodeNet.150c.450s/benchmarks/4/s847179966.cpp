#include<iostream>
#include<vector>

using namespace std;

int main()
{
	int m, f, r;
	vector<char> grade;
	do {
		cin >> m >> f >> r;
		if (!(m == -1 && f == -1 && r == -1)) {
			if (m == -1 || f == -1) grade.push_back('F');
			else if (m + f >= 80) grade.push_back('A');
			else if (m + f >= 65 && m + f < 80) grade.push_back('B');
			else if (m + f >= 50 && m + f < 65) grade.push_back('C');
			else if (m + f >= 30 && m + f < 50) {
				if (r >= 50) grade.push_back('C');
				else grade.push_back('D');
			}
			else if (m + f < 30) grade.push_back('F');
		}
	} while (!(m == -1 && f == -1 && r == -1));

	for (vector<int>::size_type i = 0; i < grade.size(); i++)
		cout << grade[i] << "\n";
}