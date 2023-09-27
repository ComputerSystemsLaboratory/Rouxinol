#include <iostream>
#include <cstring>
using namespace std;

string u[256];
bool lock = true;
int n, m;

int main(){
	cin >> n;
	for(int i = 0; i < n; i++) cin >> u[i];
	cin >> m;
	for(int i = 0; i < m; i++){
		bool ok = true;
		string t;
		cin >> t;
		for(int j = 0; j < n; j++){
			if(u[j] == t){
				ok = false;
				if(lock) cout << "Opened by " << t << endl;
				else cout << "Closed by " << t << endl;
				lock = (lock+1)%2;
				break;
			}
		}
		if(ok) cout << "Unknown " << t << endl;
	}
}