#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	int a,b,c;
	vector<int> d;
	while(1){
		d.clear();
		c = 0;
		cin >> a;
		if(a == 0)break;
		for(int i = 0;i < a;i++){
			cin >> b;
			d.push_back(b);
		}
		sort(d.begin(),d.end());
		for(int i = 1;i < d.size()-1;i++){
			c+=d[i];
		}
		cout << c/(d.size() - 2) <<endl;
	}	
	return 0;
}