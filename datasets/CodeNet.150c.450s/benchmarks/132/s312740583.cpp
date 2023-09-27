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

using namespace std;

#define INF 1000000000
#define EPS 1e-9
#define PI acos(-1)

typedef long long ll;

#define MAX_N 50
#define MAX_P 50

int n, p;
int h[MAX_N];

vector<int> ans_list;

int main(){

  while(true){
    cin >> n >> p;
    if(n == 0 && p == 0)
      break;
    memset(h, 0, sizeof(h));
    int step = 0;
    int turn = 0; //現在のターン
    int num = p; //碗の中に入っている石の数
    while(true){

      if(num == 1 && num+h[turn] == p){
	ans_list.push_back(turn);
	break;
      }
      
      if(num > 0){
	h[turn]++;
	num--;
	turn++;
	if(turn == n)
	  turn = 0;
      }

      else{
	num += h[turn];
	h[turn] = 0;
	turn++;
	if(turn == n)
	  turn = 0;
      }

    }

  }

  for(int i = 0; i < ans_list.size(); i++){
    cout << ans_list[i] << endl;
  }

  return 0;

}