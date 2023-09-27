#include <sstream>
#include <cstring>
#include <string>
#include <vector>
#include <map>
#include <algorithm>
#include <iostream>
#include <utility>
#include <set>
#include <cctype>
#include <queue>
#include <stack>
#include <cstdio>
#include <cstdlib>
#include <cmath>
#include <iterator>
#include <numeric>
#include <functional>
#include <climits>



using namespace std;
typedef unsigned long long ull;
typedef long long ll;

int main(int argc, char *argv[]){
  string buf;
  deque<int> stack;
  while(cin >> buf){
    char c = buf[0];
    if(c == '+' || c == '-' || c == '*'){
      int a = stack.back(); stack.pop_back();
      int b = stack.back(); stack.pop_back();
      int x;
      switch(c){
      case '+': x = b + a; break;
      case '-': x = b - a; break;
      case '*': x = b * a; break;
      }
      stack.push_back(x);
    } else{
      stack.push_back(atoi(buf.c_str()));
    }
  }
  cout << stack.back() << endl;
  return 0;
}