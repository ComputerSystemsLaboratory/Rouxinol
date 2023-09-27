#include <iostream>
#include <vector>
using namespace std;

int main() {
	int n,p;
	
	while(cin >> n >> p,n){
		int wan = p;
		vector<int> te;
		te.resize(n);
	
		int i=0;
		while(1){
			if(wan == 0){
				wan = te[i];
				te[i] = 0;
			}else{
				if(te[i]==p-1) break;
				te[i]++;
				wan--;
			}
		
			i++;
			i = i%n;
		}
	
		cout << i << endl;
	}
	
	return 0;
}