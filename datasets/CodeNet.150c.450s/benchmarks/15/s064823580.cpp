#include <iostream>
#include <string>
using namespace std;

int n,f[100000],q,g[50000];
int x=0;

int main(){
	cin >> n;
	for(int i=0;i<n;i++) cin >> f[i];
	cin >> q;
	for(int i=0;i<q;i++) cin >> g[i];
	for(int i=0;i<q;i++){
		for(int j=0;j<n;j++){
			if(g[i]==f[j]){
				x++;
				break;
			}
		}
	}
	cout << x <<endl;
	return 0;
}