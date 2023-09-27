#include <iostream>
#include <string>
#include <queue>
using namespace std;
struct pro{
	string name;
	int time;
};

int main(){
	queue<pro> que;
	pro p;
	int n,q,count = 0;
	cin >> n >> q;
	for(int i = 0;i < n;i++){
		cin >> p.name >> p.time;
		que.push(p);
	}
	while(1){
		p =	que.front();
		que.pop();
		if(p.time <= q){
			count += p.time;
			cout << p.name << " " << count <<endl;
		}
		else{
			p.time -= q;
			count += q;
			que.push(p);
		}
		if(que.empty())break;
	}
	return 0;
}