#include<iostream>
#include<algorithm>
using namespace std;
 
int main(){
   
  int e;

  while(cin>>e, e){
    int mi=1000000;
    for(int z=0;z*z*z<=e;z++){
      for(int y=0;z*z*z+y*y<=e;y++){
	int x=e-(z*z*z+y*y);
	mi=min(mi, x+y+z);
      }
    }
    cout<<mi<<endl;
  }
   
  return 0;
}