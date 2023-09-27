#include <bits/stdc++.h>
using namespace std;

int main(){
	ios::sync_with_stdio(false);
	int cnt,time,nowTime=0;
	cin >> cnt >> time;
	string name[cnt];
	int data[cnt];
	queue<int> que;
	for(int i=0; i<cnt; i++){
		cin >> name[i] >> data[i];
		que.push(i);
	}

	while(!que.empty()){
		int i = que.front();

		if( data[i] - time <= 0 ){
			nowTime += data[i];
			cout << name[i] << " " << nowTime << endl;
			que.pop();
		}else{
			data[i] -= time;
			nowTime += time;
			que.pop();
			que.push(i);
		}
	}
	return 0;
}