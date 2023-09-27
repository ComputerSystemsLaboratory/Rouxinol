#include <cstdio>
#include <list>
#include <algorithm>
using namespace std;

void printList(list<int> l){
  int i = 0;
  for (list<int>::iterator it = l.begin(); it != l.end(); it++){
    if(i++) printf(" ");
    printf("%d", *it);
  }
  printf("\n");
}

int main()
{
  int n, val;
  char order[12];
  scanf("%d", &n);

  list<int> seq;
  for (int i = 0;i<n;i++){
    scanf("%s", order);
    if (order[6] == 'F') seq.pop_front();
    else if (order[6] == 'L') seq.pop_back();
    else
    {
      scanf("%d", &val);
      if (order[0] == 'i') seq.push_front(val);
      else {
        auto itr = find(seq.begin(), seq.end(), val);
        if (itr == seq.end()) continue;
        seq.erase(itr);
      }
    }
  }

  printList(seq);
  return 0;
}