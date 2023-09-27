#include<iostream>
#include<fstream>
#include<algorithm>
#include<list>
using namespace std;

int main() {
	int i, j, n;
	long long int x;
	list<long long int> l;
	list<long long int>::iterator itl;
	//ifstream fin("ALDS1_3_C-in10.txt");
	//if (!fin) {
	//	cout << "failed to open the file\n";
	//	return 1;
	//}
	//ofstream fout("out.txt");
	cin >> n;
	for (i = 0; i < n; i++) {
		char com[15] = {};
		cin >> com;
		if (com[0] == 'i') {
			cin >> x;
			l.push_front(x);
		}
		else if (com[6] == 'F')l.pop_front();
		else if (com[6] == 'L')l.pop_back();
		else if (com[0] == 'd') {
			cin >> x;
			for (itl = l.begin(); itl != l.end(); itl++) {
				if (*itl == x) {
					l.erase(itl);
					break;
				}
			}
		}
	}
	for (itl = l.begin(); itl != l.end(); itl++) {
		if (itl != l.begin())cout << " ";
		cout << *itl;
	}
	cout << endl;
	//fin.close();
	//fout.close();
	return 0;
}