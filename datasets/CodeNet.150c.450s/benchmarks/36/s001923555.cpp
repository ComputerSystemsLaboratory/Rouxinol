#include <iostream>
using namespace std;

int main(){
	int d;
	while(cin>>d){
		int ans = 0;
		for(int i=1; i<600/d; i++){
			int in = d*i;
			ans += (in*in)*d;
		}
		cout<<ans<<endl;
	}
	return 0;
}