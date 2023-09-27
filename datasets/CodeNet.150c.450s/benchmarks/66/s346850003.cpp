#include <string>
#include <iostream>
#include <set>
#include <stdio.h>
using namespace std;
int main()
{
  int i,M,N,f=1;
  set<string> U;
  char str[15];
  std::cin >> N;
  for (i=0;i<N;i++){
    std::cin >> str;
    U.insert(str);
  }
  std::cin >> M;
  for (i=0;i<M;i++){
    std::cin >> str;
    set<string>::iterator t=U.find(str);
      if (t==U.end())
        printf("Unknown %s\n",str);
      else{
        if (f==1){
          printf("Opened by %s\n",str);
          f=0;
        }else{
          printf("Closed by %s\n",str);
          f=1;
        }
      }
  }

  return 0;
}