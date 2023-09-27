#include <stdio.h>
#include <iostream>
#include <string>
using namespace std;
void insert(int);
void _delete(int);
void deleteFirst(void);
void deleteLast(void);
#define N 2000020
clock_t start, finish;
struct list
{
	int li;
	list *pl, *pl2;
};
int cou = 0, now = 0;
list L[N], first, last;
int main(void)
{
	int n, x;
	char c[12];
	list *f;
	first.li = -1;
	first.pl = &last;
	last.li = -1;
	last.pl2 = &first;
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf("%s", c);		
		if (c[0] == 'i') {
			scanf("%d", &x);
			insert(x);
		}
		else if (c[0] == 'd' && c[6] == '\0') {
			scanf("%d", &x);
			_delete(x);
		}
		else if(c[0] == 'd' && c[6] == 'F') { deleteFirst(); }
		else if(c[0] == 'd' && c[6] == 'L') { deleteLast(); }
		f = first.pl;
	}
	for (int i = 0; ; i++) {
		printf("%d", f->li);
		if (last.pl2 == f) break;
		f = f->pl;
		printf(" ");
	}
	printf("\n");
}
void insert(int a)
{
	L[cou].li = a;
	L[cou].pl2 = &first;
	L[cou].pl = first.pl;;
	first.pl->pl2 = &L[cou];
	first.pl = &L[cou];
	cou++; now++;
}
void _delete(int a)
{
	list *f, *fb, *fa;
	f = first.pl;
	if (now >= 1) {
		for (int i = 0; ; i++) {
			if (a == f->li) {
				fa = f->pl; fb = f->pl2;
				fb->pl = fa;
				fa->pl2 = fb;
				now--;
				break;
			}
			if (last.pl2 == f) break;
			f = f->pl;
		}
	}
}
void deleteFirst(void)
{
	if (now >= 1) {
		list *fa;
		fa = first.pl;
		fa->pl->pl2 = &first;
		first.pl = fa->pl;
		now--;
	}
}
void deleteLast(void)
{
	if (now >= 1) {
		list *fb;
		fb = last.pl2;
		fb->pl2->pl = &last;
		last.pl2 = fb->pl2;
		now--;
	}
}