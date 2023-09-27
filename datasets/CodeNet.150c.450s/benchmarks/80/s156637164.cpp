#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
	int v[2]={};
	for(int i=0; i<2; i++){
		for(int j=0; j<4; j++){
			int n;
			cin >> n;
			v[i] += n;
		}
	}
	cout << max(v[0], v[1]) << endl;
}