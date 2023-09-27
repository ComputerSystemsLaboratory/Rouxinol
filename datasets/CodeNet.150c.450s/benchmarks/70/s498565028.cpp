#include <iostream>
using namespace std;

int main(){
  int day30[4] = {4,6,9,11};

  while(1) {
  int m,d;
  cin >> m >> d;
  if(m == 0 && d == 0) break;
  int a = 1,b = 1,count = 0;

  while(1) {

    if(a == m && b == d) break;
    
    b++;
    count++;

    if(a == 2 && b == 30) {
      a++;
      b = 1;
    }
    else if(b == 31) {
      for(int i=0;i<4;i++) 
	if(day30[i] == a) {
	  a++;
	  b = 1;
	  break;
	}
    }
    if( b == 32) {
      a++;
      b = 1;
    }
  }
  
  if(count % 7 == 4 ) cout <<"Monday"<<endl;
  else if(count % 7 == 5) cout << "Tuesday"<<endl;
  else if(count % 7 == 6) cout <<"Wednesday"<< endl;
  else if(count % 7 == 0) cout <<"Thursday"<< endl;
  else if(count % 7 ==1) cout << "Friday" << endl;
  else if(count % 7 ==2)cout << "Saturday" << endl;
  else if(count % 7 ==3) cout << "Sunday" << endl;
  
  }

  return 0;
}