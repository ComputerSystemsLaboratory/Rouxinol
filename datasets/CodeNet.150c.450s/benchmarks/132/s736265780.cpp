#include <iostream>
using namespace std;

int main(){

  while(1){
    int n,p;
    cin >> n >> p;
    if(n==0)break;
    
    int st[55]={};
    int i=0,hoge=p;

    while(1){
      if( st[i] == hoge-1 && p>0){
	cout << i << endl;
	break;
      }
      if(p>0){
	st[i]++;
	p--;
      }
      else{
	p = st[i]; 
	st[i]=0;
      }

      i++;
      if(i==n) i=0;
    }
  }
  return 0;
}