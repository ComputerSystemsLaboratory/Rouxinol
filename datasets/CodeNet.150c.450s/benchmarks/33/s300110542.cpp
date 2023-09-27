#include <iostream>
#include <algorithm>

using namespace std;

int x,y;
int calc(int pp){
  int p = 0;
  for(int i = 1 ; i < 1000 ; i++){
    if(i*(100+x)/100 == pp){
      p = i;
      break;
    }
  }
  return p*(100+y)/100;
}

int main(){
  int s;
  while(cin >> x >> y >> s,(x|y|s)){
    int max = 0;
    for(int i = 1 ; i <= s/2 ; i++){
      max = std::max(max,calc(i)+calc(s-i));
    }
    cout << max << endl;
  }
  return 0;
}