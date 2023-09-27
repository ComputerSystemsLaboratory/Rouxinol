#include<stdio.h>

int element[20];
int size;

bool check(int nowPos, int val) {
  if(val == 0) {
    return true;
  }
  if(val < 0) {
    return false;
  }
  if(nowPos > size) {
    return false;
  }
  return check(nowPos + 1, val - element[nowPos]) || check(nowPos + 1, val);
}
int main(void) {
  int n, m, target;
  scanf("%d", &n);
  size = n;
  for(int i = 0; i < n; i++) {
    scanf("%d", &element[i]);
  }
  scanf("%d", &m);
  for(int i = 0; i < m; i++) {
    scanf("%d", &target);
    if(check(0, target)){
      printf("yes\n");
    }
    else {
      printf("no\n");
    }
  }
  return 0;
}