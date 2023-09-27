#include <cstdio>
#include <cstdlib>
#include <cstring>
using namespace std;

struct Elm
{
  int val;
  Elm *prev, *next;
};

Elm *nil;

void newList()
{
  nil = (Elm *)malloc(sizeof(Elm));
  nil->next = nil;
  nil->prev = nil;
}

void insert(int val)
{
  Elm *x = (Elm *)malloc(sizeof(Elm));
  x->val = val;
  x->next = nil->next;
  nil->next->prev = x;
  nil->next = x;
  x->prev = nil;
}

void del(Elm *e)
{
  if (e == nil)
    return;
  e->prev->next = e->next;
  e->next->prev = e->prev;
  free(e);
}

void dropHead()
{
  del(nil->next);
}

void dropLast()
{
  del(nil->prev);
}

Elm *find(int val)
{
  Elm *cur = nil->next;
  while (cur != nil && cur->val != val)
    cur = cur->next;
  return cur;
}

void remove(int val)
{
  del(find(val));
}

void print()
{
  Elm *cur = nil->next;
  while (cur != nil)
  {
    if (cur->next == nil)
      printf("%d\n", cur->val);
    else
      printf("%d ", cur->val);
    cur = cur->next;
  }
}

int main()
{
  int n, val;
  char order[12];
  scanf("%d", &n);
  newList();

  for (int i = 0; i < n; i++)
  {
    scanf("%s", order);
    if (order[6] == 'F') dropHead();
    else if (order[6] == 'L') dropLast();
    else
    {
      scanf("%d", &val);
      if (order[0] == 'i') insert(val);
      else remove(val);
    }
  }

  print();
  return 0;
}