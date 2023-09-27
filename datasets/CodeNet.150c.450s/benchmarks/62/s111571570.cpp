
#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
	vector<int> vi(3);
	cin >> vi[0] >> vi[1] >> vi[2];
	sort(vi.begin(),vi.end());
	cout << vi[0] << " " << vi[1] << " " << vi[2] << endl;
	return 0;
}