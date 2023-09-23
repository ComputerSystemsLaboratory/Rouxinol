#include <iostream>

using namespace std;

int main(){
	int n;
	int i;
	long long ans=1;

	cin >> n;
	for(i=0; i<n; i++){
		ans = ans * (i+1);
	}
	cout << ans << endl;

	return 0;

}