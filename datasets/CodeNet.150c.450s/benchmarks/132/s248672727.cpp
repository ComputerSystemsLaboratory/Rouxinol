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

#define MAX_N 50
#define MAX_P 50

int n, p;

int temoto[MAX_N];

vector<int> ans_list;

int main(){
  
  while(true){
    cin >> n >> p;
    if(n == 0 && p == 0)
      break;

    int sum = p;
    memset(temoto, 0, sizeof(temoto));

    int turn = 0;
    
    while(true){
      if(p > 0){
	temoto[turn%n]++;
	p--;
	if(p == 0 && temoto[turn%n] == sum)
	  break;
      }
      else{
	p += temoto[turn%n];
	temoto[turn%n] = 0;
      }
      turn++;
    }

    ans_list.push_back(turn%n);
    
  }

  for(int i = 0; i < ans_list.size(); i++){
    cout << ans_list[i] << endl;
  }
  
  
  return 0;
  
}