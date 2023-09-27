#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main(){
	int x,y;
	vector<int> asc;
	while(cin >> x >> y){
		if(x == 0 && y == 0) return 0;
		asc.push_back(x);
		asc.push_back(y);
		sort(asc.begin(),asc.end());
		cout << asc[0] << " " << asc[1] << endl;
		asc.clear();
	}
}