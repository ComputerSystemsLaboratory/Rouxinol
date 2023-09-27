#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(void){
	int n;
	vector<int> N;

	for(int i=0;i<3;i++){
		cin >> n;
		N.push_back(n);
	}
	sort(N.begin(),N.end());

	for(int i=0;i<3;i++){
		cout << N.at(i);
		if(i!=2) cout << " ";
		else cout << endl;
	}
	return 0;
}