#include <iostream>
#include <queue>
using namespace std;

int main(int argc, char const *argv[]){
	int n;
	priority_queue<int> que;

	while(1){
		int total = 0;
		int i;
		cin>>n;
		if (n==0) break;
		for (int i = 0; i < n; i++){
			int tmp;
			cin>>tmp;
			que.push(tmp);
		}
		que.pop();
		int m = que.size()-1;
		for (i = 0; i < m; i++){	
			total += que.top();
			que.pop();
		}
		cout<<total/i<<endl;
		que.pop();
	}
	return 0;
}