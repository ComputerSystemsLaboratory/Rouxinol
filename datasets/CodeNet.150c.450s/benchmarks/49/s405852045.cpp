#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
  int n;
  while(cin >> n){
    int sum = 0;
    int s[100];
    if(n == 0) break;
    else{
      for(int i = 0; i < n; i++){
	cin >> s[i];
      }
      sort(s, s + n);
      s[0] = 0;
      s[n - 1] = 0;
      for(int i = 0; i < n; i++){
	sum += s[i];
      }
      cout << sum / (n - 2) << endl;
    }
  }
}