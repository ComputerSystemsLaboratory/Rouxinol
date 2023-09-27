#include<iostream>
#include<cstdlib>
#include<cmath>
#include<vector>
#include<stack>
#include<queue>
#include<string>
#include<bitset>
#define DEBUG
using namespace std;
int main(){
  int n;
  while(cin >> n && n) {
    int num[n];
    for (int i = 0; i < n; i++) {
      cin >> num[i];
    }
    int min = 1000000;
    for (int i = 0; i < n; i++) {
      for (int j = i+1; j < n; j++) {
	if (min > abs(num[i]-num[j])) {
	  min = abs(num[i]-num[j]);
	}
      }
    }
    cout << min << endl;
  }




  return 0;
}
