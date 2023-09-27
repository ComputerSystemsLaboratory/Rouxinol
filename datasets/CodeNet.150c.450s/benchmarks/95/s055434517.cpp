#include <iostream>
#include <string>

using namespace std;

int main(){
	int n;
	while(cin >> n, n){
		int res = 0;
		int target = 2;
		int state = 0;
		for(int i=0;i<n;i++){
			string s; cin >> s;
			if(s[1] == 'u') state++;
			else            state--;
			if(state == target){
				res++;
				target = 2-target;
			}
		}
		cout << res << endl;
	}
}