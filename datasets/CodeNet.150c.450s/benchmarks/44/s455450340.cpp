#include <iostream>
using namespace std;
#define rep(i,n) for(int i=0;i<n;i++)

int main(){
	while(true){
		int pos[10] = {0} , t , ans[2] = {0};
		rep(i,4) if(cin >> t) pos[t] = i+1; else return 0;
		rep(i,4){
			cin >> t;
			if(pos[t]) ans[pos[t]==i+1]++;
		}
		cout << ans[1] << " " << ans[0] << endl;
	}	
}