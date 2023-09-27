#include <iostream>

using namespace std;

int main() {
	int d;
	int ans;
	while(cin>>d, !cin.eof()){
		ans = 0;
		for(int i=d; i<600; i+=d){
			ans += d * (i*i);
		}
		cout<<ans<<endl;
	}
}