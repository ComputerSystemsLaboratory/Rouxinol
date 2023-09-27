#include <bits/stdc++.h>

using namespace std;

#define loop(n) for(int lp=0; lp<(n); lp++)
#define ascent(i, a, b)  for(int (i)=(a); (i)<(b); (i)++)
#define descent(i, a, b) for(int (i)=(a); (i)<(b); (i)--)

int main() {
  int h, w;
  while(cin >> h >> w, h||w) {
    pair<int, int> ans = make_pair(h, w);
    int orig_t = h*h + w*w;
    
    bool flg = false;

    for(int i = 1; i <= 150; i ++) {
      for(int j = i+1; j <= 150; j ++) {
	int pre_h = ans.first;
	int pre_w = ans.second;
	int t1 = pre_h*pre_h + pre_w*pre_w;
	int t2 = i*i+j*j;
	
	if(!flg) {
	  if(t1 < t2 || (t1 == t2 && pre_h < i)) {
	    //	    cout << pre_h << "," << pre_w << " " << i << "," << j << endl;
	    //cout << orig_t << " " << t1 << " " << t2 << endl;

	    ans = make_pair(i, j);
	    flg = true;
	  }
	}
	else {
	  if((orig_t < t2 && t2 < t1) || (orig_t == t2 && t2 < t1 && h < i) || (orig_t < t2 && t2 == t1 && i < pre_h)) {
	    //cout << pre_h << "," << pre_w << " " << i << "," << j << endl;
	    //cout << orig_t << " " << t1 << " " << t2 << endl;

	    ans = make_pair(i, j);
	  } 
	}
      }
    }

    cout << ans.first << " " << ans.second << endl;
  }
  return 0;
}