#include<iostream>
#include<vector>

using namespace std;

int main()
{
  unsigned n, s;
  
  while(cin >> n >> s, (n != 0 || s != 0)) {
    vector<unsigned> no(9);
    unsigned cnt = 0, sum = 0, i, k, max = 0, min = 0;
    for(i = 0; i < n ; i++){
      no[i] = i;
      min += i;
      max += 9 - i;
    }
    if(max < s || min > s) { cout << 0 << endl; continue; }
    cnt = 0;
    while(1) {
      //for(i = 0; i < n; i++) cout << i << no[i] << "  ";
      //cout << endl;
      for(k = sum = 0; k < n; k++) {
	sum += no[k];
      }
      if (sum == s) cnt++;
      //cout << sum << endl;
      if (sum >= s) no[n - 1] = 9;
      no[n - 1]++;
    
	for(k = n - 1; k > 0; k--) {
	  if(no[k] > 9 -  n  +  k + 1) {
	    no[k - 1]++;
	    for(i = k; i < n; i++) {
	      no[i] = no[i - 1] + 1;
	    } 
	  }
	}
	if(no[0] > 9 - n + 1) break;	    
    }
    cout << cnt << endl;
  }
}