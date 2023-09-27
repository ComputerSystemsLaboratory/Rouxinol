#include <iostream>
#include <vector>
using namespace std;

int main(void){
  int n, w;
  cin >> n >> w;

  vector<int> nap(w, 0);
  vector<int> vecv(n), vecw(n);
  for(int i=0; i<n; i++){
    cin >> vecv[i] >> vecw[i];
  }

  for(int i=0; i<n; i++){
    for(int j=w-1; j>vecw[i]-2; j--)
      if(nap[j] < nap[j-vecw[i]] + vecv[i])
	nap[j] = nap[j-vecw[i]] + vecv[i];
  }

  cout << nap[w-1] << endl;

  return 0;
}