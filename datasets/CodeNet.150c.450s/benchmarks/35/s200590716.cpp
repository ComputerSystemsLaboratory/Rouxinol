/*
 * AOJ-Volume0-0022
 */
#include <iostream>
#include <limits.h>
#include <vector>
#include <cstdio>

using namespace std;

typedef long long ll;

/*
 * Find maximum sum.
 *   array: number list
 */
ll findMaximumSum(vector<int> &array){
  ll sumValue = array[0];
  ll maxValue = array[0];
  int length = array.size();

  for(int i = 1; i < length; i++){
    ll value = array[i];

    if(sumValue < 0){
      sumValue = value;
    }else{
      sumValue += value;
    }

    if(maxValue < sumValue){
      maxValue = sumValue;
    }
  }

  return maxValue;
}

void solve(int n){
  vector<int> a(n);

  for(int i = 0; i < n; i++){
    scanf("%d", &a[i]);
  }

  cout << findMaximumSum(a) << endl;
}

int main(){
  int n;

  while(cin >> n){
    if(n == 0) break;

    solve(n);
  }

  return 0;
}