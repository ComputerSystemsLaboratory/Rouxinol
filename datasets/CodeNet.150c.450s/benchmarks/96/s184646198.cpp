#include <vector>
#include <list>
#include <map>
#include <set>
#include <deque>
#include <stack>
#include <bitset>
#include <algorithm>
#include <functional>
#include <numeric>
#include <utility>
#include <sstream>
#include <iostream>
#include <iomanip>
#include <cstdio>
#include <cmath>
#include <cstdlib>
#include <cctype>
#include <string>
#include <cstring>
#include <ctime>
#include <fstream>
#include <queue>
#include <complex>

#define INF 100000000
#define EPS 1e-9

using namespace std;

typedef long long ll; 

#define MAX_N 31
#define MAX_M 501

int N;

string alpha[10];

vector<string> ans_list;

int main(){
  
  cin >> N;

  alpha[1] = ".,!? ";
  alpha[2] = "abc";
  alpha[3] = "def";
  alpha[4] = "ghi";
  alpha[5] = "jkl";
  alpha[6] = "mno";
  alpha[7] = "pqrs";
  alpha[8] = "tuv";
  alpha[9] = "wxyz";

  while(N > 0){
    N--;
    string str, ans;
    cin >> str;
    for(int i = 0; i < str.length(); i++){
      if(str[i] == '0')
	continue;
      int num = 0;
      for(int e = i+1; e < str.length(); e++){
	if(str[i] != str[e]){
	  num = e - i;
	  break;
	}
      }
      ans += alpha[str[i] - '0'][(num-1) % alpha[str[i] - '0'].length()];
      i += num;
    }
    ans_list.push_back(ans);
  }

  for(int i = 0; i < ans_list.size(); i++){
    cout << ans_list[i] << endl;
  }

  return 0;
  
}