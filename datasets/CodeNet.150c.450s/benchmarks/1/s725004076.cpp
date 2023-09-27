#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
	int n;
	int a;
	vector<int> l;
	cin >> n;
	for(int i = 0;i < n;i++){
		cin >> a;
		if(l.empty()) l.push_back(a);
		else{
			if(l.back() < a) l.push_back(a);
			else{
				l[lower_bound(l.begin(),l.end(),a) - l.begin()] = a;
			}
		}
	}
	cout << l.size() << endl;
	return 0;
}