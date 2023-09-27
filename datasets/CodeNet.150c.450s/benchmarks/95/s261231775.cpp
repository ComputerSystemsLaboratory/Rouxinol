#include <bits/stdc++.h>
using namespace std;
#define int long long 
#define Rep(i, N) for(int i = 0; i < N; i++)

string ch[] = {"ld", "rd", "lu", "ru"};

signed main()
{
  int N;
  string S;
  
  while(cin >> N, N) {
    
    bool flag = false;
    int cnt = 0, bit = 3;
    
    Rep(i, N) {
      
      cin >> S;
      Rep(j, 4) {
	
	if(S == ch[j]) {
	  bit |= 1 << j;
	  bit &= ~(1 << ((j + 2) % 4));
	}
      }
      if(flag && bit == 3) cnt++, flag = false;
      if(!flag && bit == 12) cnt++, flag = true;
    }
    
    cout << cnt << endl;

  }

  return 0;
}