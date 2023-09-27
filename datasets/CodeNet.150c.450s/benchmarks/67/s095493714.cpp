#include<iostream>

using namespace std;

const int MAX = 1001;
int data[MAX];

void make(){
  for(int i = 1; i < MAX; i++)
    data[i] = data[i-1]+i;
}

int solve(int in){
  int ans = 0;
  for(int i = 0; i < MAX; i++)
    for(int j = i+2; j < MAX; j++)
      if(data[j]-data[i] == in) ans++;
  return ans;
}
int main(){
  make();
  int in;
  while(cin >> in && in) cout << solve(in) << endl;
  return 0;
}