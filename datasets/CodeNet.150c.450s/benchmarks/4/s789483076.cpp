#include <vector>
#include <iostream>
using namespace std;

class Student
{
public:
	int m, f, r;
	Student() : m(), f(), r() { }
	Student(int m, int f, int r) : m(m), f(f), r(r) { }

	char grade() const {
		if(m==-1 || f==-1) return 'F';
		int total = m + f;
		if(total >= 80) return 'A';
		if(total >= 65) return 'B';
		if(total >= 50 || r >= 50) return 'C';
		if(total >= 30) return 'D';
		return 'F';
	}
};

int main()
{
	int m, f, r;
	vector<Student> student;

	while(cin >> m >> f >> r && !(m==-1 && f==-1 && r==-1))
		student.emplace_back(m, f, r);

	for(const auto &s : student)
		cout << s.grade() << '\n';

	return 0;
}

