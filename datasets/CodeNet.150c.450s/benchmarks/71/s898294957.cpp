#include <iostream>
using namespace std;

int main()
{
  int n;
  while(cin >> n){
    int count = 0;
    for(int a=0; a<10; a++){
      for(int b=0; b<10; b++){
	for(int c=0; c<10; c++){
	  if( 0<=n-(a+b+c) && n-(a+b+c)<10 ){
	    count++;
	  }
	}
      }
    }
    cout << count << endl;
  }
  return 0;
}