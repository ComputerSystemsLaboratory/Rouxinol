#include<iostream>
#include<string>
#include<list>
#include <stdio.h>

using namespace std;
list<int> lst;

int main()
{
	int dataset; scanf("%d", &dataset);
	for (int i = 0; i < dataset; i++)
	{
		char order[20];
		scanf("%s", order);
		if (order[0] == 'i') {
			int a; scanf("%d", &a);
			lst.push_front(a);
		}
		else if (order[6] == 'F') {
			lst.pop_front();
		}
		else if (order[6] == 'L') {
			lst.pop_back();
		}
		else {
			int order; cin >> order;
			auto itr = lst.begin();
			int size = lst.size();
			for (int i = 0; i < size; i++)
			{
				if (*itr == order) {
					lst.erase(itr);
					break;
				}
				itr++;
			}
		}
	}
	for (
		auto itr = lst.begin(); itr != lst.end(); itr++)
	{
		if (itr != lst.begin()) {
			printf(" ");
		}
		printf("%d", *itr);
	}
	printf("\n");
	return 0;
}