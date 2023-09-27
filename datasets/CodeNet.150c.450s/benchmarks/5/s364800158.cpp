#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(void){
	int n;
	vector<int> a;
	int i;
	int count=0;
	int in;

	cin >> n; if(n<0||n>100) return 0;
	for(i=0;i<n;i++){
		cin >> in;
		a.push_back(in);
		count++;
	}
	reverse(a.begin(),a.end());
	for(i=0;i<count;i++){
		if(i==count-1) cout << a.at(i) << endl;
		else cout << a.at(i) << " ";
	}
	return 0;
}