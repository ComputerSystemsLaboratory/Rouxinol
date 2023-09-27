#include <iostream>
#include <cstdlib>
#include <vector>
using namespace std;

int main(){
  int tmp;
  vector<int> v(101,0);
    
  while(cin>>tmp){
    ++v[tmp];
  }

  int max_=0;

  for(int i=0;i<101;++i)
    max_ = max(max_,v[i]);

  for(int i=0;i<101;++i){
    if(v[i]==max_)
      cout<<i<<endl;
  }
  return EXIT_SUCCESS;
}