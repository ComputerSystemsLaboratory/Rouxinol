#include <iostream>
using namespace std;
int main(){
	int t = 0;
	while(1){
		int x;
		cin >> x;
		if(x==0) return 0;
		t++;
		cout << "Case " << t << ": " << x << endl;
	}
}