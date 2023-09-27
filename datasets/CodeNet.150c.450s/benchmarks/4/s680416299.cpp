#include <iostream>
using namespace std;

class student {
	int m;
	int f;
	int r;
public:
	student(int m,int f, int r);
	char grade();
	bool isempty();
};

student::student(int m, int f, int r){
	this->m = m;
	this->f = f;
	this->r = r;
}

char student::grade(){
	if (m == -1 || f == -1){
		return 'F';
	}
	if (m + f >= 80) {
		return 'A';
	}
	if (m + f >= 65){
		return 'B';
	}
	if (m + f >= 50){
		return 'C';
	}
	if (m + f >= 30){
		if (r >= 50){
			return 'C';	
		}
		return 'D';
	}
	return 'F';
}

bool student::isempty(){
	return m == -1 && f == -1 && r == -1;
}

int main(int argc,char *argv[]){
	student *s;
	while(1){
		int m,f,r;
		cin >> m >> f >> r;
		s = new student(m, f, r);
		if (s->isempty()){
			break;
		}
		cout << s->grade() << endl;
		delete s;
	}
	return 0;
}