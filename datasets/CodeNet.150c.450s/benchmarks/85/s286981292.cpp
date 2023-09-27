#include <iostream>
#include <cstdlib>
#include <cstdio>

using namespace std;

typedef struct matrix{
  int row;
  int column;
  struct matrix *next;
  struct matrix *back; 
}Matrix;

Matrix *push_back(Matrix *begin, int row, int column) {
  Matrix *p = (Matrix*)malloc(sizeof(Matrix));
  p->row = row;
  p->column = column;
  p->next = NULL;
  p->back = NULL;
  if(begin == NULL) return p;
  Matrix *p2 = begin;
  while(p2->next != NULL) p2 = p2->next;
  p2->next = p;
  p->back = p2;
  return begin;
}

Matrix *product_count(Matrix *x, int type, int *count) {
  Matrix *a,*b;
  if(type == 0) {
    a = x->back;
    b = x;
  }
  else {
    a = x;
    b = a->next;
  }
  *count = 0;
  if(a == NULL || b == NULL) return x;
  *count += a->row * a->column * b->column;
  Matrix *c = (Matrix*)malloc(sizeof(Matrix));
  c->row = a->row;
  c->column = b->column;
  c->next = b->next;
  c->back = a->back;
  if(a->back != NULL) a->back->next = c;
  if(b->next != NULL) b->next->back = c;
  free(a);
  free(b);
  return c;
}

Matrix *product_atob(Matrix *a, Matrix *b, int type,  long *sum) {
  int count;
  if(a == b) return a;
  if(type == 0) {
    while(a->next != b) {
      b = product_count(b, 0, &count);
      *sum += count;
    }
  }
  else {
   while(a->next != b) {
      a = product_count(a, 1, &count);
      *sum += count;
    }
  }
  a = product_count(a, 1, &count);
  *sum += count;
  return a;
}

Matrix *solve(Matrix *x, long *sum) {
  if(x->next == NULL) return x;
  Matrix *min = x->next, *p = x;
  while (p->next != NULL) {
    p = p->next;
    if(min->column > p->column) min = p;
  }
  if(min->column < x->row) {
    x = product_atob(x, min, 0, sum);
    if(x->next != NULL) {
      p = solve(x->next,sum);
      x = product_atob(x,p,0,sum);
    }
  }
  else if(min->column > x->row) {
    if(x->back == NULL || x->back->row > x->row) {
      while(min->next != NULL) min = min->next;
      x = product_atob(x, min, 1, sum);
    }
    else{
      x = product_atob(x,min,1,sum);
    }
  }
  else {
    Matrix *min2 = x->next;
    p = x->next;
    while (p != min) {
      if(min2->column > min->column && min2->column > p->column) min2 = p;
      p = p->next;
    }
    x = product_atob(x, min2, 1, sum);
    product_atob(x->next, min, 0, sum);
    x = product_atob(x, x->next, 1, sum);
    if(x->next != NULL) {
      p = solve(x->next,sum);
      x = product_atob(x,p,0,sum);
    }
    p = solve(x,sum);
  }
  return x;
}

int main()
{
  int i,n,r,c;
  Matrix *begin = NULL;
  scanf("%d",&n);
  for (i = 0; i < n; i++) {
    scanf("%d %d",&r,&c);
    begin = push_back(begin,r,c);

  }
  long sum = 0;
  begin = solve(begin, &sum);
  cout << sum << endl;
  
  return 0;
}