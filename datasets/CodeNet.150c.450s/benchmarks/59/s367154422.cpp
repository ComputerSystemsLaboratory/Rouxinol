#include <iostream>
#include <vector>
using namespace std;

int main(void){
	int n,i,j,k;
	vector<int> N;

	cin >> n;
	for(i=0;i<n;i++){
		cin >> k;
		N.push_back(k);
	}
	for(j=0;j<n;j++){
		if(j==n-1) cout << N.at(j) << endl;
		else cout << N.at(j) << " ";
	}
	for(i=1;i<n;i++){
		for(j=0;j<i;j++){
			if(N.at(i)<N.at(j)){
				N.insert(N.begin()+j,N.at(i));
				N.erase(N.begin()+i+1);
				break;
			}
		}
		for(j=0;j<n;j++){
			if(j==n-1) cout << N.at(j) << endl;
			else cout << N.at(j) << " ";
		}
	}
	return 0;
}