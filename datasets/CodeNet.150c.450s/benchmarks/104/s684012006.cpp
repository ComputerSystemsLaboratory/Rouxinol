#include <iostream>
#include <vector>
#include <utility>
using namespace std;

int main(){
	int w,n,a,b;
	char c;
	cin >> w >> n;
	vector<int> v;
	for(int i = 0; i < w+1; i++){
		v.push_back(i);
	} 
	
	for(int j = 0; j < n; j++){
		cin >> a >> c >> b;
		swap(v[a],v[b]);
	}
	
	for(int k = 1; k < w+1; k++){
		cout << v[k] << "\n";
	}
}