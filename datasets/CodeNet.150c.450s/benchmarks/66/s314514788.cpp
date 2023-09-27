#define REP(i,n) for(int i=0; i<(int)(n); i++)

#include <cstdio>
#include <set>
#include <iostream>
using namespace std;

inline int getInt(){ int s; scanf("%d", &s); return s; }
inline string getStr(){ char buff[256]; scanf("%s", buff); return buff; }

int main(){
  const int n = getInt();
  set<string> u;

  REP(i,n) u.insert(getStr());

  bool lock = true;

  const int m = getInt();

  REP(i,m){
    const string s = getStr();
    if(u.count(s)){
        if(lock){
          printf("Opened by ");
        }else{
          printf("Closed by ");
        }
        lock = !lock;
    }else{
        printf("Unknown ");
    }
    puts(s.c_str());
  }

  return 0;
}