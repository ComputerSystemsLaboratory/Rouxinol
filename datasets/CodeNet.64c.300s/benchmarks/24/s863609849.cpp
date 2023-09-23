#include <iostream>

using namespace std;


int main() {

  int n;
  int p_a,p_b;


  while(cin >> n,n) {

    p_a=p_b=0;

    for(int i=0;i<n;i++) {

      int a,b;

      cin >> a >> b;

      if(a>b) p_a+=a+b;

      else if(a==b) {

	p_a+=a;
	p_b+=b;

      }

      else p_b+=a+b;

    }

    cout << p_a << " " << p_b << endl;

  }

  return 0;

}