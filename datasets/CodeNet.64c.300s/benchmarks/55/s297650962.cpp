
#include <iostream>
using namespace std;

int main() {
	int n,ban = 0;
	while(true){
		cin >> n;
		ban += 1;
		if(n == 0){
		break;
		}
		cout << "Case " << ban << ":" << " " << n << endl;
	}
	return 0;
}