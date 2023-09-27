#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int N,R,p,c;
int main() {
  while(cin >> N >> R && N>0){
    vector<int> a(N);
    for(int i=0;i<N;i++){
      a[i] = N-i;
      //cout << a[i] << endl;
    }
    for (int i=0; i<R;++i){
      cin >> p >> c;
      rotate(a.begin(),a.begin()+p-1,a.begin()+p-1+c);
      for(int j=0;j<a.size(); j++){
	//cout << a[j] << endl;
      }
    }
    cout << a[0] << endl;
  }
}