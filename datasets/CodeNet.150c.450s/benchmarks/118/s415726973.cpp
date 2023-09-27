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

 
using namespace std;
 
#define INF 1000000000
#define EPS 1e-9
#define PI acos(-1)
 
typedef long long ll;

#define MAX_N 100

int n;

vector<int> ans_list;


int main(){

  cin >> n;

  int sum1 = (20+19)*5;
  int sum2 = 20*10;

  while(n > 0){
    n--;

    int Y, M, D;
    cin >> Y >> M >> D;

    int ans = 0;

    while(Y < 1000){
      
      ans++;
      D++;

      if(Y%3 == 0 && D == 21){
	M++;
	D = 1;
	if(M == 11){
	  Y++;
	  M = 1;
	  D = 1;
	}
      }

      else if(Y%3 != 0){
	if(M%2 == 0){
	  if(D == 20){
	    M++;
	    D = 1;
	    if(M == 11){
	      Y++;
	      M = 1;
	      D = 1;
	    }
	  }
	}
	else{
	  if(D == 21){
	    M++;
	    D = 1;
	    if(M == 11){
	      Y++;
	      M = 1;
	      D = 1;
	    }
	  }
	}
      }

    }

    ans_list.push_back(ans);

  }

  for(int i = 0; i < ans_list.size(); i++){
    cout << ans_list[i] << endl;
  }

  return 0;

}