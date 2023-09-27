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

#define MAX_N 100

int n;
string f[MAX_N];

vector<int> ans_list;

int main(){

  while(true){
    cin >> n;
    if(n == 0)
      break;

    for(int i = 0; i < n; i++){
      cin >> f[i];
    }

    int ans = 0;

    int mode = 1; //0:床
    int r = 0;
    int l = 0;

    for(int i = 0; i < n; i++){
      if(f[i] == "lu")
	l = 1;
      else if(f[i] == "ru")
	r = 1;
      else if(f[i] == "ld")
	l = 0;
      else
	r = 0;

      if(mode == l && mode == r && mode == 1){
	ans++;
	mode = 0;
      }

      else if(mode == l && mode == r && mode == 0){
	ans++;
	mode = 1;
      }

    }

    ans_list.push_back(ans);

  }

  for(int i = 0; i < ans_list.size(); i++){
    cout << ans_list[i] << endl;
  }

  return 0;

}