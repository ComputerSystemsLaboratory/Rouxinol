#include <bits/stdc++.h>
using namespace std;
#define MAX 1000
#define NIL -2000000001

// 1オリジンの配列
vector<int> H(MAX, NIL);
int n;

void printParentKey(int i)
{
  int tmp = H.at(floor((double)i / 2.0));
  if (tmp != NIL)
  {
    printf("parent key = %d, ", tmp);
  }
}

void printLeftKey(int i)
{
  int tmp = H.at(i * 2);
  if (tmp != NIL)
  {
    printf("left key = %d, ", tmp);
  }
}

void printRightKey(int i)
{
  int tmp = H.at(i * 2 + 1);
  if (tmp != NIL)
  {
    printf("right key = %d, ", tmp);
  }
}

void print(int i)
{
  printf("node %d: key = %d, ", i, H.at(i));
  printParentKey(i);
  printLeftKey(i);
  printRightKey(i);
  printf("\n");
}

int main()
{
  scanf("%d", &n);
  for (int i = 1; i <= n; i++)
  {
    scanf("%d", &H.at(i));
  }

  for (int i = 1; i <= n; i++)
  {
    print(i);
  }
}
