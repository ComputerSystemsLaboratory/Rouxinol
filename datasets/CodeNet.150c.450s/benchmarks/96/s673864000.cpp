#include <iostream>
#include <cstdio>
#include <cstring>
#include <cstdlib>
#include <cmath>
#include <vector>
#include <string>
#include <map>
#include <queue>
#include <stack>
#include <algorithm>

#define rep(i, j) FOR(i, 0, j)
#define FOR(i, j, k) for(int i = j; i < k; ++i)

using namespace std;

int main(){
  char ch[10][6] = { {""},
		     {".,!? "},
		     {"abc"},
		     {"def"},
		     {"ghi"},
		     {"jkl"},
		     {"mno"},
		     {"pqrs"},
		     {"tuv"},
		     {"wxyz"}};

  int n;
  scanf("%d", &n);
  while(n--){
    string s;
    cin >> s;
    int f = 0, c = 0, k = 0;
    rep(i, s.size()){
      if(s[i] == '0'){
	//	printf("%d %d\n", k, c-1);
	if(f) printf("%c", ch[k][(c-1)%strlen(ch[k])]);
	f = 0;
	c = 0;
	k = 0;
      }else{
	f = 1;
	c++;
	k = s[i]-'0';
	//	printf("%d %d %d\n", f, c, k);
      }
    }
    puts("");
  }
  return 0;
}