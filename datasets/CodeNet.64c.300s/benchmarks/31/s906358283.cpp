#include <cstdio>
#include <algorithm>

using namespace std;

int main()
{
  int stu[30];

  for (int i = 0; i < 28; i++) scanf("%d", &stu[i]);
  for (int i = 1; i <= 30; i++){
    if (count(stu, stu + 30, i) == 0){
      printf("%d\n", i);
    }
  }

}