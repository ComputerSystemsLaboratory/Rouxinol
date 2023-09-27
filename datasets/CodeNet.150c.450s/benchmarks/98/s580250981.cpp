#include <iostream>
#include <vector>
using namespace std;

int main(int argc, char *argv[])
{
  int n, m, n_input, m_input;
  int change_card1, change_card2;
  
  while(1) {
    int exsum = 200, com = 0, nsum = 0, msum = 0;
    vector<int> nv, mv;
    cin >> n >> m;
    if (n == 0 && m == 0) {
      return 0;
    }
    for (int i = 0; i < n; i++) {
      cin >> n_input;
      nsum += n_input;
      nv.push_back(n_input);
    }
    for (int i = 0; i < m; i++) {
      cin >> m_input;
      msum += m_input;
      mv.push_back(m_input);
    }

    if (nsum > msum) {
      int sumsub, odd;
      sumsub = nsum - msum;
      odd = sumsub % 2;
      if (odd != 0) {
	cout << "-1" << endl;
	continue;
      }
      sumsub = sumsub / 2;
      for (int i = 0; i < nv.size(); i++) {
	for (int j = 0; j < mv.size(); j++) {
	  int sub = 0;
	  sub = nv[i] - mv[j];
	  if(sumsub == sub) {
	    
	    com = nv[i] + mv[j];
	    if (com < exsum ) {
	      exsum = com;
	      change_card1 = nv[i];
	      change_card2 = mv[j];
	    }
	  }
	}
      }
      if (exsum == 200) cout << "-1" << endl;
      else cout << change_card1 << " " << change_card2 << endl;
    }
    

    if (nsum <= msum) {
      int sumsub, odd;
      sumsub = msum - nsum;
      odd = sumsub % 2;
      if (odd != 0) {
	cout << "-1" << endl;
	continue;
      }
      sumsub = sumsub / 2;
      for (int i = 0; i < mv.size(); i++) {
	for (int j = 0; j < nv.size(); j++) {
	  int sub = 0;
	  sub = mv[i] - nv[j];
	  if(sumsub == sub) {

	    com = mv[i] + nv[j];
	    if (com < exsum ) {
	      exsum = com;
	      change_card2 = mv[i];
	      change_card1 = nv[j];
	    }
	  }
	}
      }
      if (exsum == 200) cout << "-1" << endl;
      else cout << change_card1 << " " << change_card2 << endl;

    }

  }
}