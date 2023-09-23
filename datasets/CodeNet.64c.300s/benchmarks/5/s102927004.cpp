#include <iostream>
using namespace std;
int main(){
	int m[10];
	for(int i=0;i<10;i++) cin >> m[i];
	while(1){
		bool j = true;
		for(int i=0;i<9;i++){
			if(m[i]<m[i+1]){
				int t = m[i];
				m[i] = m[i+1];
				m[i+1] = t;
				j = false;
			}
		}
		if(j) break;
	}
	for(int i=0;i<3;i++) cout << m[i] << endl;
}