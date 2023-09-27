#include<iostream>
#include<cstdio>
#include <list>
#include<algorithm>
#include<cstring>
using namespace std;

int main() {
	int n;
	scanf("%d", &n);
	list<int> v;
	char c[20]; int d;
	for (int i = 0;i < n;i++) {
		scanf("%s%d", c, &d);
		if (c[0] == 'i')
			v.push_front(d);
		else if (c[6] == 'F')
			v.pop_front();
		else if (c[6] == 'L')
			v.pop_back();
		else
		for(list<int>::iterator it=v.begin();it!=v.end();it++)
			if (*it == d) {
				v.erase(it);
				break;
			}
	}

	for (list<int>::iterator it = v.begin();it != v.end();it++)
	{
		if (it!=v.begin()) printf(" ");
		printf("%d", *it);
	}
	cout << endl;
}