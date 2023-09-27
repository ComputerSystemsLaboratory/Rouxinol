#include<iostream>
#include<vector>
#include<string>
#include<list>
#include<stdio.h>
#pragma warning(disable : 4996)
using namespace std;

int main() {
	list<int>a;
	int b;
	scanf("%d", &b);
	for (int c = 0; c < b; c++) {
		string d;
		cin >> d;
		if (d == "insert") {
			int e;
			scanf("%d", &e);
			a.push_front(e);
		}
		else if (d == "deleteFirst")a.pop_front();
		else if (d == "deleteLast")a.pop_back();
		else {
			int g;
			cin >> g;
			auto h = a.end();
			for (auto k = a.begin(); k != a.end(); k++) {
				if ((*k) == g) { h = k; break; }
			}
			if (h != a.end())a.erase(h);
		}
	}
	for (auto k = a.begin(); k!=a.end(); k++) {
		printf("%d", (*k));
		if (k != --a.end())printf(" ");
		else printf("\n");
	}
}