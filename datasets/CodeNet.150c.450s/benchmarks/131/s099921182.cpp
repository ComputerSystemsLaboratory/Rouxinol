#include <iostream>
#include <stdio.h>
#include <string>
#include <stdlib.h>
#include <algorithm>

using namespace std;

string s;
int L;
int used[1000005];

string toStr(int x)
{
  char buf[55];
  sprintf(buf, "%d", x);
  return buf;
}

int main(void)
{
  while(1){
    cin >> s >> L;
    if(s == "0" && L == 0) break;

    for(int i = 0; i <= 1000000; i++) used[i] = -1;
    used[atoi(s.c_str())] = 0;

    int maxi, mini, val;
    for(int i = 1; ; i++){
      while(s.size() < L) s = "0" + s;
      sort(s.begin(), s.end());
      mini = atoi(s.c_str());
      reverse(s.begin(), s.end());
      maxi = atoi(s.c_str());

    //cout << mini << " " << maxi << endl;

      val = maxi - mini;
      if(used[val] >= 0){
        cout << used[val] << " " << val << " " << i - used[val] << endl;
        break;
      }
      used[val] = i;
      s = toStr(val);
    }
  }

  return 0;
}

