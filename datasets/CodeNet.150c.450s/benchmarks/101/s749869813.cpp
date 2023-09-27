#include<iostream>
#include<vector>
#include<stack>
using namespace std;
vector<int>v[100000];
int color[100000];
void dpf(int a,int c) {
    color[a] = c;
	stack<int>s;
	for (int i = 0; i < v[a].size(); i++) {
		int t = v[a][i];
		s.push(t);
		color[t] = c;
	}
	while (!s.empty())
	{
		int k = s.top();
		s.pop();
		for (int i = 0; i < v[k].size(); i++) {
			
			int t = v[k][i];
			if (color[t] == 0) {
				s.push(t);
				color[t] = c;
			}
		}
	}
}
void setcolor(int n) {
	int t=1;
	for (int i = 0; i < n; i++) {
		if (color[i] == 0) {
			dpf(i, t++);
		}
	}
}
int main(void) {
	int n,k;
	cin >> n;
	cin >> k;
	for (int i = 0; i < k; i++) {
		int a, b;
		cin >> a >> b;
		v[a].push_back(b);
		v[b].push_back(a);
	}
	setcolor(n);
	int q;
	cin >> q;
	for (int i = 0; i < q; i++) {
		int a, b;
		cin >> a >> b;
		if (color[a]==color[b])
		{
			cout << "yes";
		}
		else {
			cout << "no";
		}
		cout << endl;
	}
}
