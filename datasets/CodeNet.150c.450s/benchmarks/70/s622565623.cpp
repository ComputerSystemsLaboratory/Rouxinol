#include <cstdio>
#include <string>

using namespace std;

int main(void){
  int a,b;

  int nday[15] = {0,31,29,31,30,31,30,31,31,30,31,30,31};
  string ans[10] = {"Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday"};

  while(true){
    scanf("%d%d", &a,&b);
    if(a == 0 && b == 0)
      break;
    
    int sum = 3;
    for(int i = 1; i < a; i++)
      sum += nday[i];
    sum += b;

    printf("%s\n", ans[sum%7].c_str());

  }
  return 0;
}