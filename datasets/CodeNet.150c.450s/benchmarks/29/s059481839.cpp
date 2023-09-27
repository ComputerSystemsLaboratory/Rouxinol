#include <iostream>
#include <cstdio>
#include <list>
#include <cstring>
#include <algorithm>

using namespace std;

int main() {


	list<int> lnk;

	const int SLEN = 20;
	char com[SLEN];
	int n, key = 0;


	

	scanf("%d", &n);

	for (int i = 0;i < n;i++)
	{
		scanf("%s%d", com, &key);

		if (com[0] == 'i') {
			lnk.push_front(key);
		}
		else if (com[0] == 'd') {

			if (strlen(com) > 6) {
				if (com[6] == 'F') {
					lnk.pop_front();
				}
				else if (com[6] == 'L') {
					lnk.pop_back();
				}
			}
			else {
				for (list<int>::iterator it = lnk.begin();it != lnk.end();it++) {
					if (*it == key) {
						lnk.erase(it);
						break;
					}
				}
			}
		}
	}



	int i = 0;
	for (list<int>::iterator it = lnk.begin();it != lnk.end();it++) {
		if (i++) printf(" ");
		printf("%d", *it);
	}
	printf("\n");

	return 0;
}


