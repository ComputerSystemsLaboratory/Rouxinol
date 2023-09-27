#include<iostream>
using namespace std;

int main(void){
  int memo[101] = {0};
  int n, max = 0;

  while(cin >> n)
    memo[n]++;

  for(int i = 0; i < 101; i++)
    if(max < memo[i])
      max = memo[i];

  for(int i = 0; i < 101; i++)
    if(memo[i] == max)
      cout << i << endl;

  return 0;
}