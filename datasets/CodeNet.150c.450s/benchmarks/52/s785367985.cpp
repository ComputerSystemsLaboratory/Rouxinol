#include <cstdio>
#include <iostream>
#include <algorithm>
#include <cmath>
#include <string>
#include <cstring>
#include <vector>
#include <map>
#include <utility>
#include <complex>
#include <stack>

using namespace std;

typedef complex<double> P;

int main(){

	stack<int> d;
	int x;
	while(cin>>x){
		if(x == 0){
			cout << d.top() << endl;
			d.pop();
		}else {
			d.push(x);
		}
	}

	return 0;
}