#include <iostream>
#include <algorithm>
#include <queue>
#include <cstring>

using namespace std;

int main(){
  int x,y,s;
  while(cin>>x>>y>>s){
    if(x == 0 && y == 0 && s==0)
      break;
    int tmp = 0;

    for(int i = 1;i<s;i++){
      for(int j = 1;j<s;j++){
	int t = (int)(i * (100+x)/100.0) + (int)(j * (100+x)/100.0);
	if(t == s){
	  t = (int)(i * (100+y)/100.0)+(int)(j*(100+y)/100.0);
	  tmp = max(tmp,t);
	}
      }
    }
    
    cout<<tmp<<endl;
  }

  return 0;
}