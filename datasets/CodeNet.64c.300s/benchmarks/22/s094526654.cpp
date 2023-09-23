#include <iostream>
#include <string>
#include <algorithm>
#include <stack>
#include <queue>
#include <set>

using namespace std;

int main(){
	int a;
	int b;
	int c;
	int d;
	cin >> d;
	for (int i = 0; i < d; i++){
		cin >> a >> b >> c;
		int e = a*a;
		int f = b*b;
		int g = c*c;
		if ( e + f== g || e + g == f || f + g == e){
			cout << "YES" << endl;
		}
		else cout << "NO" << endl;
	}

	return 0;
}