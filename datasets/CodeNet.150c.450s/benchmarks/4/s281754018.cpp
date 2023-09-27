#include <iostream>
#include <list>
using namespace std;

char GetGrade(const int* personal_score) {
	if(personal_score[0] == -1 || personal_score[1] == -1) return 'F';

	int score = personal_score[0]+personal_score[1];
	if(score >= 80) return 'A';
	else if(score >= 65 && score < 80) return 'B';
	else if(score >= 50 && score < 65) return 'C';
	else if(score >= 30 && score < 50) {
		return (personal_score[2]>=50)?'C':'D';
	}
	else if(score < 30) return 'F';
}

int main(int argc, char** argv) {
	int personal_score[3];
	int m, f, r;
	list<char> list;

	while(1) {
		cin >> m >> f >> r;
		if(m==-1 && m==f && f==r && r==m) break;
		personal_score[0] = m;
		personal_score[1] = f;
		personal_score[2] = r;
		list.push_back(GetGrade(personal_score));
	}
	for(std::list<char>::iterator it = list.begin(); it != list.end(); ++it)
		cout << *it << endl;
	return 0;
}