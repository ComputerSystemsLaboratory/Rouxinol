#include <bits/stdc++.h>

using namespace std;

int main()
{
  int n, p;
  while(cin >> n >> p, n || p){
    int wan = p, te[50] = {0};
    for(int s = 0; s < 10000000; s++){
      if(wan > 0){
	te[s%n]++, wan--;
	if(wan == 0 && te[s%n] == p){
	  cout << s%n << endl;
	  break;
	}
      } else {
	wan = te[s%n], te[s%n] = 0;
      }
    }
  }
  return 0;
}