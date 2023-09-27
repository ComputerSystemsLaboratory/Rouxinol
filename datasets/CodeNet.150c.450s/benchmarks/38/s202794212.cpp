#include <bits/stdc++.h>
using namespace std;

int main(){
  int n; cin>>n;

  while(n!=0){
    vector<int> e(3); cin>>e[0]>>e[1]>>e[2]; 

    sort(e.begin(),e.end());

    if(e[2]*e[2]==e[1]*e[1]+e[0]*e[0])
      cout<<"YES"<<endl;
    else
      cout<<"NO"<<endl;

    --n;
  }

  return EXIT_SUCCESS;
}