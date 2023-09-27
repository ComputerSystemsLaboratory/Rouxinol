#include <iostream>
#include <stack>
using namespace std;

int main()
{
  while(1){
    int n, r;
    cin >> n >> r;
    if(n == 0 && r == 0){
      break;
    }else{
      stack <int> x, y, z;
      while(!x.empty())
	x.pop();
      for(int i = 1; i <= n; i++)
	x.push(i);
      for(int i = 0; i < r; i++){
	int p, c;
	cin >> p >> c;
	for(int j = 1; j < p; j++){
	  y.push(x.top());
	  x.pop();
	}
	for(int j = 0; j < c; j++){
	  z.push(x.top());
	  x.pop();
	}
	while(!y.empty()){
	  x.push(y.top());
	  y.pop();
	}
	while(!z.empty()){
	  x.push(z.top());
	  z.pop();
	}
      }
      cout << x.top() << endl;
    }
  }
}