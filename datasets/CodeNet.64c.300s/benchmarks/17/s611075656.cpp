#include<iostream>
using namespace std;

int main(){

  int x,y,s;
  int max;


  while(cin >> x >> y >> s){
    if(x==0 && y==0 && s==0){ break; }

    max = 0;

    for(int i=1; i<s; i++){
      for(int j=s; j>=i; j--){
	if((int)(i*(100+x)/100) + (int)(j*(100+x)/100) == s){

	  if((int)(i*(100+y)/100) + (int)(j*(100+y)/100) > max){
	    max = (int)(i*(100+y)/100) + (int)(j*(100+y)/100);
	  }
	}
      }
    }

    cout << max << endl;

  }

  return 0;
}