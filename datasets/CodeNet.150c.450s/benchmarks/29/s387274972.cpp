/*
 * c.cc: 
 */

#include<cstdio>
#include<cstdlib>
#include<cstring>
#include<cmath>
#include<iostream>
#include<string>
#include<vector>
#include<map>
#include<set>
#include<stack>
#include<list>
#include<queue>
#include<deque>
#include<algorithm>
#include<numeric>
#include<utility>
#include<complex>
#include<functional>

using namespace std;

/* constant */

/* typedef */

struct DList {
  int key;
  struct DList *prev, *next;
};

/* global variables */

/* subroutines */

void print_dlist(DList *root) {
  for (DList *dl = root->next; dl != root; dl = dl->next) {
    printf("%d", dl->key);
    if (dl->next != root) putchar(' ');
  }
  putchar('\n');
}

/* main */

int main() {
  DList head;
  head.key = -1;
  head.next = head.prev = &head;

  int n;
  int tmp = scanf("%d", &n);

  while (n--) {
    char c[16];
    tmp = scanf("%s", c);
    
    if (c[0] == 'i') {
      int x;
      tmp = scanf("%d", &x);

      DList *dl = new DList();
      dl->key = x;
      dl->prev = &head;
      dl->next = head.next;
      head.next = dl->next->prev = dl;
    }
    else if (c[0] == 'd' && c[6] == '\0') {
      int x;
      tmp = scanf("%d", &x);

      DList *dl;
      for (dl = head.next; dl != &head; dl = dl->next)
	if (dl->key == x) {
	  dl->prev->next = dl->next;
	  dl->next->prev = dl->prev;
	  break;
	}
    }
    else if (c[0] == 'd' && c[6] == 'F') {
      DList *dl = head.next;
      dl->prev->next = dl->next;
      dl->next->prev = dl->prev;
    }
    else if (c[0] == 'd' && c[6] == 'L') {
      DList *dl = head.prev;
      dl->prev->next = dl->next;
      dl->next->prev = dl->prev;
    }

    //print_dlist(&head);
  }

  print_dlist(&head);
  return 0;
}