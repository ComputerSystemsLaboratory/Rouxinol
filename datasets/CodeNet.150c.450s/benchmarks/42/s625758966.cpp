#include <iostream>
#include <queue>
#include <string>
#include <utility>

using namespace std;

int main(void){
	int n, q, sum_time = 0;
	queue<pair<string,int> > que;

	cin >> n >> q;

	for(int i = 0;i < n;i++){
		string name;
		int time;
		cin >> name >> time;
		que.push(make_pair(name,time));
	}
	while(que.size()){
		string name;
		int time;
		name = que.front().first;
		time = que.front().second;
		que.pop();
		if(time - q > 0){
			sum_time += q;
			que.push(make_pair(name,time - q));
		}else{
			sum_time += time;
			cout << name << " " << sum_time << endl;
		}
	}
	return 0;
}