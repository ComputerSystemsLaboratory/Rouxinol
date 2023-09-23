#include <iostream>
using namespace std;

int main(){
  int n,i,S;
  while(cin >> n){
    i = 0;
    for(S=0;S<=9999;S++){
      if((S/1000)+((S-S/1000*1000)/100)+((S-S/100*100)/10)+(S-S/10*10)==n)
	i=i+1;
    }
    cout<<i<<endl;
  }
  return 0;
}
