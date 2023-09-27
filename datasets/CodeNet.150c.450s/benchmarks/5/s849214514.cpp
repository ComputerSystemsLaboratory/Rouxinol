#include <iostream>
#include <vector>
using namespace std;

int main(){
	int n;
	cin >> n;
	vector<int> v;
	int x;
	for(int i = 0; i < n; i++){
		cin >> x;
		v.insert(v.begin(),x);
	}
	x = 1;
	for(auto y:v){
		cout << y;
		if( x != n ){
			cout << " ";
		}
		x++;
	}
	cout << endl;
	return 0;
}