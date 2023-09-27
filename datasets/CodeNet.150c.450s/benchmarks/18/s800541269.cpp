#include <bits/stdc++.h>
using namespace std;

int main(){
  int debt = 100000;

  int n; cin>>n;
  for(int i=0;i<n;++i){
    debt *= 1.05;
    int tmp = (debt/1000)*1000;
    if(debt>tmp){
      tmp += 1000;
      debt = tmp;
    }
  }

  cout<<debt<<endl;

  return EXIT_SUCCESS;
}