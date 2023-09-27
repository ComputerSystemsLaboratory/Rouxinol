#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
	vector <int> x;
	
	for(int i = 0;i < 5; i++){
		int n;
		cin >> n;
		x.push_back(n);
	}
	
	sort(x.begin(), x.end() );
	
	for(int i = 4;i >= 0; i--){
		cout << x[i];
		if(i != 0 ) cout << " ";
	}
	
	cout << endl;
	
	return 0;
}