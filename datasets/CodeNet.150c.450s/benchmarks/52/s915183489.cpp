#include<iostream>
#include<algorithm>
#include<string>
#include<cmath>
#include<vector>
#include<functional>
#include<stack>

using namespace std;

int main(){
	int n;
	vector<int> ans;
	stack<int> a;
	while (cin >> n) {
		if (n > 0)a.push(n);
		else if (n == 0) {
			int temp;
			temp = a.top();
			ans.push_back(temp);
			a.pop();
		}
	}
	for (int i = 0; i < ans.size(); i++)cout << ans[i] << endl;
	return 0;
}