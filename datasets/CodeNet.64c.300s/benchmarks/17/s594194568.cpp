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
typedef pair<int, int> P;
  
#define MAX_S 1000

int x, y, s;

vector<int> ans_list;

int calc(int num, int per){
  
  return num*(100 + per)/100;

}

int main(){
  
  while(true){
    
    cin >> x >> y >> s;
    if(x == 0)
      break;

    int ans = 0;

    for(int i = 1; i <= 1000; i++){
      for(int j = 1; j <= 1000; j++){
	if(calc(i,x) + calc(j,x) != s)
	  continue;
	ans = max(ans,calc(i,y) + calc(j,y));
      }
    }

    ans_list.push_back(ans);

  }  

  for(int i = 0; i < ans_list.size(); i++){
    cout << ans_list[i] << endl;
  }

  return 0;
  
}