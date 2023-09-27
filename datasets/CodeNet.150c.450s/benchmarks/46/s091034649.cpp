#include <iostream>
#include <vector>
using namespace std;

int main(){
  vector<int> n, x, r;

  while(true){
    int a, b; cin >> a >> b;
    if(a==0 && b==0) break;
    n.push_back(a);
    x.push_back(b);
    r.push_back(0);
  }

  for(int l=0; l<(int)n.size(); l++){
    for(int i=1; i<=n[l]; i++){
      for(int j=i; j<=n[l]; j++){
        if(j==i) continue;
        for(int k=j; k<=n[l]; k++){
            if(k==i || k==j) continue;
            if(i+j+k==x[l]) r[l]++;
        }
      }
    }
  }

  for(int i=0; i<(int)n.size(); i++) cout << r[i] << endl;

  return 0;
}

