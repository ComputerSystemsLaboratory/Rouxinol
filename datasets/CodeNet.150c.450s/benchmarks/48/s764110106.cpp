#include<iostream>
#include<cstring>
#define x3(i) ((i)*(i)*(i))
#define x2(i) ((i)*(i))
using namespace std;

int main(){
  int e;
  while(cin>>e,e){
    int min=1<<30;
    for(int z=0;x3(z)<=e;z++){
      for(int y=0;x2(y)<=e;y++){
	int x=e-x3(z)-x2(y);
	if(x<0) continue;
	if(x+y+z < min) min = x+y+z;
      }
    }
    cout<<min<<endl;
  }
  return 0;
}