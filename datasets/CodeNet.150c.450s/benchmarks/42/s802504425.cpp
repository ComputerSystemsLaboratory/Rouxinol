#include <iostream>
#include <queue>
#include <vector>
using namespace std;
int main(int argc, const char * argv[]) {
	int n,t;
	queue<int> q;
	cin >> n >> t;
	int p[100005];
	string s[100005];
	for(int i = 0;i<n;i++){
		cin >> s[i];
		cin >> p[i];
		q.push(i);
	}
	int time = 0;
	while(!q.empty()){
		int now = q.front();
		q.pop();
		if(p[now]>t){
			p[now]-=t;
			time += t;
			q.push(now);
		}else{
			time += p[now];
			cout << s[now]<< " " << time << endl;
		}
	}
	return 0;
}