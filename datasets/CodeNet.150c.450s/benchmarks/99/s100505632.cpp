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

#define MAX_N 500

vector<string> ans_list;

int n;

string S = "ixcm";

int trans(string str1){
  int k = 0;
  int mode = 0;
  int num1 = 0;
  for(int i = 0; i < str1.length(); i++){
    if(mode == 0 && str1[i] >= '2' && str1[i] <= '9'){
      k = str1[i] - '0';
      mode = 1;
    }
    else if(mode == 0){
      for(int j = 0; j < 4; j++){
	if(S[j] == str1[i]){
	  num1 += pow(10, j);
	  break;
	}
      }
    }
    else{
      mode = 0;
      for(int j = 0; j < 4; j++){
	if(S[j] == str1[i]){
	  num1 += k * pow(10, j);
	  break;
	}
      }
    }
  }
  return num1;
}

int main(){

  cin >> n;

  while(n > 0){
    n--;
    string str1, str2;
    cin >> str1 >> str2;

    int num1 = 0, num2 = 0;

    num1 = trans(str1);
    num2 = trans(str2);

    int num3 = num1+num2;
    
    string ans;

    for(int num = 3; num >= 0; num--){
      int p = pow(10, num);
      int pp = num3/p;
      if(pp == 1){
	ans += S[num];
	num3 %= p;
      }
      else if(pp > 1){
	ans += ('0' + pp);
	ans += S[num];
	num3 %= p;
      }
    }

    ans_list.push_back(ans);

  }

  for(int i = 0; i < ans_list.size(); i++){
    cout << ans_list[i] << endl;
  }

  return 0;

}