#include <iostream>
using namespace std;

int main()
{
	int c=1,x;
	while(true) {
	  cin >> x;
	  if(x == 0) {
	    break;
	  }
	  cout << "Case " << c <<": " << x << endl;
	  c++;
	}
}
