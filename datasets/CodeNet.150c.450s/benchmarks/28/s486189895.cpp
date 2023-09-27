#include <iostream>
#include <algorithm>
#include <climits>
#include <vector>
#include <queue>
#include <stack>
#include <list>
using namespace std;

int calcP(vector<int> *w, int k, int p){
  int nimotu = 0;			// 積めた荷物の数
  int w_n = 1;
  int w_size = w->size();
  int p_tmp = 0;
  for (int i = 0; i < k; i++) {
    p_tmp = p;

    if (nimotu == w_size) {
      break;
    }
    // cout << w->at(w_n-1) << " " << p_tmp << "\n";
    while ((w_n != w_size+1)&&(w->at(w_n-1) <= p_tmp )) {
      p_tmp = p_tmp - w->at((w_n)-1);
      w_n++;
      nimotu++;
      // cout << p_tmp << "\n";
    }
  }
  return w_n-1;
}



int main(int argc, char *argv[])
{
  int n;			// 荷物の数
  int k;			// トラックの数
  vector<int> W;		// 荷物の中身
  int w;
  long long unsigned int start = 0;
  long long unsigned int end = 100000*10000;
  cin >> n;
  cin >> k;
  for (int i = 0; i < n; i++) {
    cin >> w;
    W.push_back(w);
  
  }
  while ((end - start)> 1) {
    long long unsigned int mid = (long long unsigned int)(start + end)/2;
    // cout << calcP(&W,k,mid) << " "<< n <<" "<< mid<< "\n";
    if (calcP(&W,k,mid) >= n) {
      end = mid;
    }else {
      start = mid;
    }
  }
  cout << end << "\n";    
  
  return 0;
}


