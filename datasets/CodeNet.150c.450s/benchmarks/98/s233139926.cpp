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

#define MAX_N 101

int n,m;
int s[MAX_N + MAX_N];

vector<pair<int, int> > ans_list;

int main(){

  while(true){
    cin >> n >> m;
    if(n == 0 && m == 0)
      break;
    
    for(int i = 0; i < n+m; i++){
      cin >> s[i];
    }

    int tmpa = 1000,tmpb = 1000;
    int suma = 0, sumb = 0;

    for(int i = 0; i < n+m; i++){
      if(i < n)
	suma += s[i];
      else
	sumb += s[i];
    }

    for(int i = 0; i < n; i++){
      for(int j = n; j < n+m; j++){
	if(suma-s[i]+s[j] == sumb-s[j]+s[i]){
	  if(s[i]+s[j] < tmpa+tmpb){
	    tmpa = s[i];
	    tmpb = s[j];
	  }
	}
      }
    }

    if(tmpa == 1000)
      ans_list.push_back(make_pair(-1,-1));
    else
      ans_list.push_back(make_pair(tmpa, tmpb));

  }
  
  for(int i = 0; i < ans_list.size(); i++){
    if(ans_list[i].first == -1){
      cout << -1 << endl;
    }
    else{
      cout << ans_list[i].first << " " << ans_list[i].second << endl;
    }
  }


  return 0;

}