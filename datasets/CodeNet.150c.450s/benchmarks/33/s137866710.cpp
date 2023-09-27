#include <iostream>
using namespace std;

int main(){
  int x, y, s;
  int max, ss;
  while(cin >> x >> y >> s && !(x==0 && y==0 && s==0)){
    max=0;
    for(int i=1;i<s;i++){
      for(int j=1;j<s;j++){
	if(i*(100+x)/100+j*(100+x)/100==s){
	  ss=i*(100+y)/100+j*(100+y)/100;
	  if(max<ss) max=ss;
	}
      }
    }

    cout << max << endl;
  }
  
  return 0;
}