#include <iostream>
#include <queue>
#include <vector>
using namespace std;

int main()
{
	int temp;
	priority_queue<int, vector<int>,greater<int> > que;
	for(int i = 0;i < 3;i++){
		cin >> temp;
		que.push(temp);
	}
	for(int i = 0;i < 2;i++){
		cout << que.top() << " ";
		que.pop();
	}
	cout << que.top() << endl;
	return 0;
}