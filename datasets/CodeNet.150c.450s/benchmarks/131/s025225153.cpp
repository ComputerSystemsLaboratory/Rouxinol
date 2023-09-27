#include <iostream>
#include <stdlib.h>
#include <string.h>
#include <vector>
#include <stack>
#include <queue>
#include <utility>
#include <algorithm>
#include <string>
#include <bitset>

using namespace std;

int main(void)
{
  int zton[10];
  
  while (true) {
    
    int num;
    int l;
    cin >> num >> l;
    
    if (num == 0 && l == 0) break;

    vector<int> v;
    v.push_back(num);
    
    for (int i = 0; i < 20; i++) {
      memset(zton, 0, sizeof(zton));
      num = v[i];
      //cout << "          " << num << endl;
      // count z to n
      for (int j = 0; j < l; j++) {
	zton[num%10]++;
	num /= 10;
      }
      int min, max;
      min = max = 0;
      //create min
      for (int j = 0; j < 10; j++) {
	for (int k = zton[j]; k > 0; k--) {
	  min *= 10;
	  min += j;
	}
      }
      
      //create max
      for (int j = 9; j >= 0; j--) {
	for (int k = zton[j]; k > 0; k--) {
	  max *= 10;
	  max += j;
	}
      }

      //cout << "max " << max << endl;
      //cout << "min " << min << endl;
      
      int dif = max - min;
      //cout << "       "  << dif << endl;
      
      bool flag = false;
      for (int j = 0; j < v.size(); j++) {
	if (dif == v[j]) {
	  cout << j << " " << dif << " " << i-j+1 << endl;
	  flag = true;
	  break;
	}
      }

      if (flag)
	break;
      else
	v.push_back(dif);
    }
    
  }
  return 0;	
}