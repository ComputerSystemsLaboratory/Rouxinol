#include <iostream>
using namespace std;

int main(){
  int n;

  cin >> n;
  for(int i = 0; i < n; i++){
    int y,m ,d;
    cin >> y >> m >> d;

    int ans=0;
    while( y != 1000 ){

      while(m != 11){
	int x;
	if(m % 2 == 0) x = 19;
	else x = 20;
	if(y % 3 == 0) x = 20;
	while(d != x+1){
	  d++;
	  ans++;
	}
	d = 1;
	m++;
      }
      m = 1;
      y++;
    }
    cout << ans <<endl;
 
  }
}