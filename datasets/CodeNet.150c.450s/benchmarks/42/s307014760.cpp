#include <iostream>
#include<stdio.h>
#include<string>
#include<queue>
using namespace std;

int main()
{
	int n, tim, alltime = 0;
	cin >> n >> tim;
	queue<string> name;
	queue<int> num;
	queue<string>toukei;
	for (int i = 0; i < n; i++)
	{
		string a; int b;
		cin >> a >> b;
		name.push(a); num.push(b);
	}
	while (1) {
		if (num.empty() == true) {
			return 0;
		}
		if (num.front() > tim) {
			int front = num.front(); string ichijiteki = name.front();
			front -= tim;
			num.pop(); name.pop(); num.push(front); name.push(ichijiteki); alltime += tim;
		}
		else {
			int sa =  num.front();
			num.pop();
			alltime += sa;
			cout << name.front() << " " << alltime << endl;
			name.pop();
		}
	}
}