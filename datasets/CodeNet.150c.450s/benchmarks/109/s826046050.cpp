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
#include <queue>
#include <fstream>
 
using namespace std;
 
#define INF 100000000
#define EPS 1e-9
#define PI acos(-1)
 
typedef long long ll;
typedef pair<int, int> P;

#define MAX_N 10000

int n;
int v[60*60*24 + 5];

vector<int> ans_list;

int conv(string str){
  string hh,mm,ss;
  hh += str[0];
  hh += str[1];
  mm += str[3];
  mm += str[4];
  ss += str[6];
  ss += str[7];

  return atoi(hh.c_str()) * 3600 + atoi(mm.c_str()) * 60 + atoi(ss.c_str());

}

int main(){

  while(true){
    cin >> n;
    if(n == 0)
      break;

    memset(v,0,sizeof(v));
    string str1, str2;

    for(int i = 0; i < n; i++){
      cin >> str1 >> str2;
      v[conv(str1)]++;
      v[conv(str2)]--;
    }

    int ans = 0;
    int tmp = 0;
    for(int i = 0; i <= 60*60*24+1; i++){
      tmp += v[i];
      ans = max(ans,tmp);
    }

    ans_list.push_back(ans);

  }

  for(int i = 0; i < ans_list.size(); i++){
    cout << ans_list[i] << endl;
  }

  return 0;

}