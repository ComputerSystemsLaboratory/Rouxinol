#include<iostream>
#include<vector>
#include<queue>

using namespace std;

int main(){
	int N,M;
	cin >>N>>M;
	vector<int> path[N];
	int A,B;
	for(int i=0;i<M;i++){
		cin >>A>>B;
		A--;
		B--;
		path[A].push_back(B);
		path[B].push_back(A);
	}
	//BFSの実装を解説動画で見た。学びがあった。
	queue<int> q;	//次に確認する番号をqueueに蓄える
	vector<int> depth(N,-1);	//そのノードの深さ
	vector<int> previous(N,-1);	//ルートを蓄える
	depth[0]=0;
	q.push(0);	//0から始める
	int target;
	while(q.empty()==false){
		target=q.front();
		q.pop();
		for(int next : path[target]){
			if(depth[next]!=-1) continue;
			depth[next]=depth[target]+1;
			previous[next]=target;
			q.push(next);
		}
	}
	int temp;
	cout <<"Yes"<<endl;
	for(int i=1;i<N;i++){
		temp=previous[i];
		temp++;
		cout <<temp<<endl;
	}
	return 0;
}