#include <iostream>

using namespace std;

int main(){
  int N; cin >> N;
  for(int i=0;i<N;++i){
	int a, b, c; cin >> a >> b >> c;
	cout << ((a*a+b*b==c*c || b*b+c*c==a*a || a*a+c*c==b*b)? "YES": "NO") << endl;
  }
}