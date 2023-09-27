#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int n,k;
vector <int> w;

bool check(int m) {

  int i=0;
  int cnt =0;
  while(1) {
    cnt++;
    if(cnt > k) return false;
    int sum =0;
    while(sum+w[i] <= m && i != n) sum+= w[i], i++;
    if(i == n) break;
  }

  return true;

}


int bainary_search(int R) {
  int L=0,M;

  while(L<R){
    M=(L+R)/2;
    if(check(M) == true) R = M;//,cout <<"true"<<endl;
    else L = M+1;
  }
  return L;

}

int main() {

  cin >> n >> k;

  w.resize(n);
  int maxR = 0;
  for(int i=0;i<n;i++) cin >> w[i],maxR+=w[i];
  
  cout <<  bainary_search(maxR) <<endl;

  return 0;
}