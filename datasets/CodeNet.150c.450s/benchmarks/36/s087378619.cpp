#include <iostream>
#define REP(i,n) for(int i = 0; i < (n); ++i)
using namespace std;

int main(){
	int d;
	while(cin >> d){
		int ret = 0;
		for (int i = 1; i * d < 600; ++i) ret += i*d * i*d * d;
		cout << ret << endl;
	}
	return 0;
}