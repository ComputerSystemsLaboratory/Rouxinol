#include <iostream>
#include <vector>
using namespace std;

int main(){
	int n;
	while(cin>>n){
		if(!n) break;
		vector<int> all;
		for(int i=0; i<n; i++){
			int buf;
			cin>>buf;
			all.push_back(buf);
		}
		int m = -10000000;
		for(int i=0; i<n; i++){
			int sum = 0;
			for(int j=i; j<n; j++){
				sum += all[j];
				m = max(m, sum);
			}
		}
		cout<<m<<endl;
	}
	return 0;
}