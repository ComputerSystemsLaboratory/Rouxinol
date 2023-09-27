#include<cstdio>
#include<list>
#include<string>
using namespace std;

int main(void) {
	int num,time;
	char str[100];
	list<int> l;

	scanf("%d", &time);

	for (int i = 0; i < time; i++) {
		scanf("%s",str);
		if (str[0] == 'i') {
			scanf("%d",&num);
			l.push_front(num);
		} else if(str[6] == 'F') {
			l.pop_front();
		} else if (str[6] == 'L') {
			l.pop_back();
		} else {//delete?????´???
			scanf("%d", &num);
			for (list<int>::iterator i = l.begin(); i != l.end(); i++) {
				if (num == *i) {
					l.erase(i);
					break;
				}
			}
		}
	}
	int j = 0;
	for (list<int>::iterator i = l.begin(); i != l.end(); i++) {
		if (j++) printf(" ");
		printf("%d",*i);
	}
	printf("\n");
	return 0;
}