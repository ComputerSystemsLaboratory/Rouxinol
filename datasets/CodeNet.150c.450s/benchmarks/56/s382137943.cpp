#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
	
	cin.tie(0);
	ios::sync_with_stdio(false);

	vector<int> vc;
	 long int sum = 0;
	int n,min,max,temp;

	cin >> n;

	for(int i = 0; i < n; i++){
		cin >> temp;
		vc.push_back(temp);
		sum +=temp;
	}
	sort(vc.begin(), vc.end());
	int last = vc.back(); 
	cout << vc[0] << " "<< last <<" "<< sum <<"\n";

	return 0;

}