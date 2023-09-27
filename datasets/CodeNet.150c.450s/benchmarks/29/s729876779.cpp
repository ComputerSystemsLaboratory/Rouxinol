#include<iostream>
#include<list>
using namespace std;
int main() {
	list<int> line;
	int code;
	char codename[11];
	int time;
	cin >> time;
	list<int >::iterator he;
	for (int i = 0; i < time; ++i) {
		cin >> codename;
		if (codename[6] == 'F')line.pop_front();
		else if (codename[6] == 'L')line.pop_back();
		else {
			cin >> code;
			if (codename[0] == 'i')line.push_front(code);
			else {
				line.push_back(code);
				for (he = line.begin(); *he != code; ++he);
				if (++he != line.end())line.erase(--he);
				line.pop_back();
			}
		}
	}
	int doll = line.back();
	line.pop_back();
	for (he = line.begin(); he != line.end(); ++he) {
		cout << *he << ' ';
	}
	cout << doll << endl;
	cin >> time;
	return 0;
}