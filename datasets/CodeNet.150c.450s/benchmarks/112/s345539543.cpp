#include <iostream>
#include <vector>
using namespace std;

int main(){
	while(1){
		int n;
		cin >> n;
		if(n==0) break;
		
		vector<char> conv(128);
		for(int i=0; i<128; i++) conv[i]=i;
		for(int i=0; i<n; i++){
			char a,b;
			cin >> a >> b;
			conv[a] = b;
		}
		
		int m;
		cin >> m;
		for(int i=0; i<m; i++){
			char a;
			cin >> a;
			cout << conv[a];
		}
		cout << endl;
	}
    return 0;
}