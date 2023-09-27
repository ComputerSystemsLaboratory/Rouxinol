#include <iostream>
#include <vector>
using namespace std;

int main(void){
  while(true){
    int n, r;
    cin >> n >> r;
    if(n == 0)
      break;

    vector<int> hana(n);
    for(int i=0; i<n; i++)
      hana[i] = n-i;

    for(int i=0; i<r; i++){
      int p, c;
      cin >> p >> c;

      vector<int> temp(p-1);
      for(int j=0; j<p-1; j++)
	temp[j] = hana[j];
      for(int j=0; j<c; j++)
	hana[j] = hana[j+p-1];
      for(int j=0; j<p-1; j++)
	hana[j+c] = temp[j];
    }

    cout << hana[0] << endl;
  }
  
  return 0;
}