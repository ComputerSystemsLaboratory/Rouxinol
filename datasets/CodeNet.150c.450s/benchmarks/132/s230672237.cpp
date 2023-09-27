#include <iostream>
#include <vector>
using namespace std;

int s[50];

int main(){
  int n, p;
  
  while(cin >> n >> p, n * p){
    for(int i = 0; i < n; i++) s[i] = 0;
    int ans = 0, sum = p;
    int c = 0;
    while(1){
      if(sum == 0){
	sum += s[c];
	s[c] = 0;
      }
      else{
	sum--;
	s[c]++;
	if(s[c] == p) break;
      }
      c = (c + 1) % n;
      ans++;
    }
    cout << c << endl;
  }
}