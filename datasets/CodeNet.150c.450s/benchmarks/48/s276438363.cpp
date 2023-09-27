#include <iostream>
#include <algorithm>

using namespace std;

const int inf = 1000000;

int main()
{
  int s, t, u, e, m;

  while(cin>>e && e){
    bool f = true;
    m = inf+1;
    for(int z = 0; z <= 100; z++){
      s = z*z*z;
      for(int y = 0; y <= 1000; y++){
	t = y*y + s;
	if(e-t >= 0){
	  m = min(m, (z+y+(e-t)));
	}
      }
    }

    cout << m << endl;
  }

  return 0;
}