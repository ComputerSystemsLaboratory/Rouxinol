#include <iostream>
#include <algorithm>
#include <vector>
#include <stack>
#include <sstream>
#include <iomanip>
#include <cmath>
#include <string>
#include <cstdio>
#include <queue>
#include <list>
using namespace std;

vector<int> a(100);

int fibonacci(int n){
  if(n == 0 || n == 1){
    return 1;
  }
  if(a[n] != 0)
    return a[n];
  else
    return a[n] = fibonacci(n-2) + fibonacci(n-1);
}

int main(void){
  int n;
  cin >> n;

  cout << fibonacci(n) << endl;

  return 0;
}