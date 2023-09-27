#include<iostream>
#include<string>
#include<list>
#include <stdio.h>
#include<set>

using namespace std;
set<string> lst;

int main()
{
	int dataset; scanf("%d", &dataset);
	for (int i = 0; i < dataset; i++)
	{
		string order;
		cin >> order;
		if (order[0] == 'i') {
			string a; cin >> a;
			lst.insert(a);
		}
		else {
			string finder;
			cin >> finder;
			if (lst.find(finder) == lst.end()) {
				cout << "no" << endl;
			}
			else {
				cout<<"yes"<<endl;
			}

		}
	}
	return 0;
}