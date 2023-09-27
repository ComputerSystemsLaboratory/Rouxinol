#include<iostream>
#include<vector>
#include<string>
#include<set>
using namespace std;

int main() {
	int a;
	cin >> a;
	set<string>b;
	for (int c = 0; c < a; c++) {
		string d, e;
		cin >> d >> e;
		if (d == "insert")b.insert(e);
		else {
			if (b.find(e) == b.end())cout << "no" << endl;
			else cout << "yes" << endl;
		}
	}
}