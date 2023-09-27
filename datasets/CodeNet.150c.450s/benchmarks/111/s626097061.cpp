#include<iostream>
using namespace std;

int n;
int d[101];
unsigned long long int memo[101][21];

unsigned long long int solve(int i, int s){

  if(i > -1 && i < 101 && s > -1 && s < 21 && memo[i][s]) return memo[i][s];
  if(i == n-1 && s == d[n-1]) return 1;
  if(i == n-1 || s < 0 || s > 20) return 0;

  return memo[i][s] = solve(i+1, s+d[i]) + solve(i+1, s-d[i]);
}

int main(){

  cin >> n;
  for(int i=0;i<n;i++) cin >> d[i];

  cout << solve(1,d[0]) << endl;

}