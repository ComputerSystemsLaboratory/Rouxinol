#include<iostream>
#include<stack>
using namespace std;

int main()
{
	stack<int> s,t,shonn,thonn;
	int n, q,st,goukei=0; cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> st;
		s.push(st);
	}cin >> q;
	shonn = s;
	for (int i = 0; i < q; i++)
	{
		cin >> st;
		t.push(st);
	}
	thonn = t;
	while (1){
		int top = thonn.top();
		while (1){
			if (top != shonn.top()){

			}
			else{
				goukei++;
				break;
			}
			shonn.pop();
			if (shonn.empty() == true){
				break;
			}
		}
		thonn.pop();
		shonn = s;
		if (thonn.empty() == true){ break; }
	}
	cout << goukei << endl;
	return 0;
}