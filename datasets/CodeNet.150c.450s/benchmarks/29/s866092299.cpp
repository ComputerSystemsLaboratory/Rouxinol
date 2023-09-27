#include<iostream>
#include<list>
#include<string>
#include<cstdlib>
using namespace std;

int main() {
	int numCom;
	list<int> lis;

//	cin >> numCom;
	scanf("%d", &numCom);
	for (int i = 0; i < numCom; i++) {
		string str;
		cin >> str;
		if (str[0] == 'i') {
			int x;
//			cin >> x;
			scanf("%d", &x);
			lis.push_front(x);
		}
		else if (str[6] == 'F') {
			lis.pop_front();
		}
		else if (str[6] == 'L') {
			lis.pop_back();
		}
		else if (str[0] == 'd') {
			int x;
//			cin >> x;
			scanf("%d", &x);
			for (list<int>::iterator ite = lis.begin(); ite != lis.end(); ite++) {
				if (*ite == x) {
					lis.erase(ite);
					break;
				}
			}
		}
	}

	int i = 0;
	for (list<int>::iterator ite = lis.begin(); ite != lis.end(); ite++) {
		if (i++) cout << " ";
		cout << *ite;
	}
	cout << endl;

	return 0;
}